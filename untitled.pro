QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    databasemanager.cpp \
    loginpage.cpp \
    main.cpp \
    register_interface1.cpp \
    register_lable.cpp \
    widget.cpp

HEADERS += \
    databasemanager.h \
    loginpage.h \
    register_interface1.h \
    register_lable.h \
    widget.h

FORMS += \
    loginpage.ui \
    register_interface1.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
