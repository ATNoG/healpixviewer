#ifndef TESSELATION_H
#define TESSELATION_H

#include <QVector>
#include <chealpix.h>
#include <math.h>
#include "face.h"

class Tesselation
{

public:
    Tesselation(int nside, bool mollview);
    void draw();

private:
    int nside;
    QVector<Face> faces;

    QVector<double> costhetas_np;
    QVector<double> costhetas_eq;
    QVector<double> costhetas_sp;

    void init();
    void getRingLatitudes();

    bool mollview;
};

#endif // TESSELATION_H
