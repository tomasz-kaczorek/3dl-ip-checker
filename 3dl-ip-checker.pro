QT += quick

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

VPATH += src

SOURCES += \
        backend.cpp \
        main.cpp

HEADERS += \
    backend.h

RESOURCES += qml.qrc

#copy script file to build director
#demonstration purposes only
script.commands = $(COPY_DIR) $$shell_path($$PWD/src/get-ip) $$shell_path($$OUT_PWD)
all.depends = script
export(all.depends)
export(script.commands)
QMAKE_EXTRA_TARGETS += all script

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
