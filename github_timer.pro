QT += core gui widgets x11extras
LIBS += -lX11  -lXtst
SOURCES += \
    main.cpp \
    mywidget.cpp \
    keyscan.cpp

HEADERS += \
    mywidget.h \
    keyscan.h
