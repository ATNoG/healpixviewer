#-------------------------------------------------
#
# Project created by QtCreator 2011-05-25T10:54:53
#
#-------------------------------------------------

QT       += core gui opengl xml

TARGET = Skyviewer
TEMPLATE = app

INCLUDE_PATH = /usr/include
INCLUDE_DIR = /usr/include
LIB_DIR = /usr/lib

LIBS += -lchealpix -lm -lcfitsio -L$$LIB_DIR -lqglviewer-qt4

SOURCES += main.cpp\
        mainwindow.cpp \
    mapviewport.cpp \
    healpixmap.cpp \
    workspace.cpp \
    mapviewer.cpp \
    face.cpp \
    boundary.cpp \
    vertice.cpp \
    tesselation.cpp \
    colortable.cpp \
    fieldmap.cpp \
    facevertices.cpp \
    facecache.cpp \
    texture.cpp \
    texturecache.cpp \
    maploader.cpp \
    mapoverlay.cpp \
    polarizationvectors.cpp \
    overlaycache.cpp \
    histogramviewer.cpp \
    histogramwidget.cpp \
    histogram.cpp \
    grid.cpp \
    viewportmanager.cpp

HEADERS  += mainwindow.h \
    mapviewport.h \
    healpixmap.h \
    workspace.h \
    mapviewer.h \
    face.h \
    boundary.h \
    vertice.h \
    tesselation.h \
    colortable.h \
    define_colortable.h \
    healpixutil.h \
    fieldmap.h \
    facevertices.h \
    facecache.h \
    blockingqueue.h \
    texture.h \
    texturecache.h \
    maploader.h \
    mapoverlay.h \
    polarizationvectors.h \
    overlaycache.h \
    histogramviewer.h \
    histogramwidget.h \
    histogram.h \
    grid.h \
    viewportmanager.h

FORMS    += mainwindow.ui \
    histogramwidget.ui \
    viewportmanager.ui

RESOURCES += \
    icons.qrc

# CONFIG += DEBUG

DEFINES += STATIC
CONFIG += static
#QMAKE_CXXFLAGS_DEBUG += -pg
#QMAKE_LFLAGS_DEBUG += -pg -v -da -Q
