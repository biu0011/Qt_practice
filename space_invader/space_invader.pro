QT       += core gui
QT += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    absolute.cpp \
    application.cpp \
    buttons.cpp \
    ledit.cpp \
    lines.cpp \
    main.cpp \
    move.cpp \
    nesting.cpp \
    plusminus.cpp \
    snake.cpp \
    timer.cpp \
    vertical_box.cpp \
    widget.cpp

HEADERS += \
    Ship.h \
    absolute.h \
    application.h \
    buttons.h \
    cursors.h \
    ledit.h \
    lines.h \
    move.h \
    nesting.h \
    plusminus.h \
    pushbutton.h \
    snake.h \
    timer.h \
    vertical_box.h \
    widget.h

TRANSLATIONS += \
    space_invader_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
