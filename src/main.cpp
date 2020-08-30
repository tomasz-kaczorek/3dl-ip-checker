#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>

#include "backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

	QQmlApplicationEngine engine;
	engine.rootContext()->setContextProperty("backend", new Backend());
	engine.load(QUrl(QStringLiteral("qrc:/frontend.qml")));

    return app.exec();
}
