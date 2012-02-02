######################################################################
# Automatically generated by qmake (2.01a) Mon Oct 3 12:35:52 2011
######################################################################

QT       += core gui opengl xml

TARGET = Skyviewer
TEMPLATE = app

INCLUDE_PATH = /usr/include
INCLUDE_DIR = /usr/include
LIB_DIR = /usr/lib

LIBS += -lchealpix -lm -lcfitsio -L$$LIB_DIR -lqglviewer-qt4

# Input
HEADERS += boundary.h \
           colormap.h \
           configs.h \
           define_colortable.h \
           face.h \
           facecache.h \
           facevertices.h \
           fieldmap.h \
           grid.h \
           healpixmap.h \
           healpixutil.h \
           histogram.h \
           histogramviewer.h \
           histogramwidget.h \
           mainwindow.h \
           maploader.h \
           mapoptions.h \
           mapoverlay.h \
           mapviewer.h \
           mapviewport.h \
           overlaycache.h \
           polarizationvectors.h \
           tesselation.h \
           texture.h \
           texturecache.h \
           ui_sidepanel.h \
           vertice.h \
           viewportmanager.h \
           workspace.h \
    exceptions.h
FORMS += histogramwidget.ui mainwindow.ui mapoptions.ui viewportmanager.ui
SOURCES += boundary.cpp \
           colormap.cpp \
           face.cpp \
           facecache.cpp \
           facevertices.cpp \
           fieldmap.cpp \
           grid.cpp \
           healpixmap.cpp \
           histogram.cpp \
           histogramviewer.cpp \
           histogramwidget.cpp \
           main.cpp \
           mainwindow.cpp \
           maploader.cpp \
           mapoptions.cpp \
           mapoverlay.cpp \
           mapviewer.cpp \
           mapviewport.cpp \
           overlaycache.cpp \
           polarizationvectors.cpp \
           tesselation.cpp \
           texture.cpp \
           texturecache.cpp \
           vertice.cpp \
           viewportmanager.cpp \
           workspace.cpp
RESOURCES += icons.qrc


CONFIG += DEBUG