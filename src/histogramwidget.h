#ifndef HISTOGRAMWIDGET_H
#define HISTOGRAMWIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QString>
#include "healpixmap.h"
#include "histogramviewer.h"
#include "mapviewer.h"
#include "colormap.h"


namespace Ui {
    class HistogramWidget;
}

class HistogramWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HistogramWidget(QWidget *parent = 0);
    ~HistogramWidget();

public slots:
    /* redraw histogram with new values */
    void updateHistogram();
    void updateHistogram(QList<int> selectedViewports);
    /* update viewport information */
    void updateMapInfo(int viewportId, mapInfo* info);
    /* unload viewport info */
    void unloadMapInfo(int viewportId);

private slots:
    /* called by lowerThreshold spinbox */
    void updateLowerThreshold(double value);
    /* called by higherThreshold spinbox */
    void updateHigherThreshold(double value);
    /* connected to apply button */
    void updateMap();
    /* called when colormap selector changes */
    void colorMapUpdate(int idx);

signals:
    void histogramUpdated(ColorMap* colorMap, float min, float max);

private:
    Ui::HistogramWidget *ui;
    Histogram *histogram;
    ColorMap *currentColorMap;

    float min, max;

    /* rebuild histogram with new threshold */
    void updateHistogramThreshold();

    void fillColorMaps();
    void updateColorMap(ColorMap* cm);
    void updateColorMapSelector(ColorMap *colorMap);

    ColorMap* getSelectedColorMap();

    /* called when a single map is selected */
    void setThresholds(float min, float max);

    QMap<int, mapInfo*> mapsInformation;
    QList<int> selectedViewports;
};

#endif // HISTOGRAMWIDGET_H