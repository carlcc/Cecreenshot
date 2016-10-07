#ifndef PENPAINTINGSTEP_H
#define PENPAINTINGSTEP_H
#include "ipaintingstep.h"
#include <QVector>

class PenPaintingStep : public IPaintingStep
{
public:
    PenPaintingStep(): points() {
    }

    void paint(QPainter *painter) {
        if (points.size() == 0)
            return;

        QPen backup = painter->pen();
        painter->setPen(pen);
        if (points.size() == 1) {
            painter->drawLine(points[0], points[0]);
        } else {
            for (int i = 1; i < points.size(); ++i) {
                painter->drawLine(points[i-1], points[i]);
            }
        }

        painter->setPen(backup);
    }

    void addPoint(const QPoint &point) {
        points.append(point);
    }

private:
    QVector<QPoint> points;
};

#endif // PENPAINTINGSTEP_H
