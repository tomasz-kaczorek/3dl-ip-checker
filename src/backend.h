#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class QProcess;

class Backend : public QObject
{
		Q_OBJECT

		Q_PROPERTY(QString ip MEMBER m_ip NOTIFY ipChanged)

	public:
		Backend();

		Q_SLOT void buttonClicked();

		Q_SIGNAL void ipChanged(QString ip);

	private:
		QString m_ip;
		QProcess * m_script;
};

#endif // BACKEND_H
