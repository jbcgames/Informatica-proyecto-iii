TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        m.cpp \
        main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453d
else:unix: LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453

INCLUDEPATH += $$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15
DEPENDPATH += $$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453d
else:unix: LIBS += -L$$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/x64/vc15/lib/ -lopencv_world453

INCLUDEPATH += $$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/include
DEPENDPATH += $$PWD/../../../Users/Miguel/Downloads/opencv-4.5.3-vc14_vc15/opencv/build/include

HEADERS += \
    m.h
