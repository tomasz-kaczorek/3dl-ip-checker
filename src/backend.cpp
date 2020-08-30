#include "backend.h"

#include <QProcess>
#include <QVariant>

Backend::Backend() :
	m_ip(tr("-")),
	m_script(new QProcess())
{
	connect(m_script, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
		[this](int exitCode, QProcess::ExitStatus exitStatus)
		{
			if(exitCode || exitStatus) return;
			this->setProperty("ip", QString(m_script->readAllStandardOutput()));
		}
	);
}

void Backend::buttonClicked()
{
	m_script->start("sh", QStringList("get-ip"));
}
