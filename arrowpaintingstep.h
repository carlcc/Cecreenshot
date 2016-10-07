#ifndef ARROWPAINTINGSTEP_H
#define ARROWPAINTINGSTEP_H

#include "ipaintingstep.h"
#include <QtMath>

class ArrowPaintingStep : public IPaintingStep
{
public:
    ArrowPaintingStep() {

    }

    void paint(QPainter *painter)
    {
        QPainterPath path(endPoint);
        path.lineTo(p1);
        path.lineTo(lineEndPoint);
        path.lineTo(p2);
        path.lineTo(endPoint);
        QPen backup = painter->pen();
        painter->setPen(pen);
        painter->drawLine(startPoint, lineEndPoint);
        painter->fillPath(path, QBrush(pen.color()));
        painter->setPen(backup);
    }

    void setFirstPoint(const QPoint& p) {
        startPoint = p;
    }

    void setSecondPoint(const QPoint& p) {
        endPoint = p;

        float dx = endPoint.x() - startPoint.x();
        float dy = endPoint.y() - startPoint.y();
        float angle;

        if (dx == 0) {
            if (dy >= 0) {
                angle = 3.14159265359 / 2;
            } else {
                angle = 3 * 3.14159265359 / 2;
            }
        } else {
            angle = qAtan2(dy, dx);
        }

        float angle1 = angle + ARROW_ANGLE + 3.14159265359;
        float angle2 = angle - ARROW_ANGLE + 3.14159265359;
        p1 = QPoint(ARROW_HEAD_EDGE * qCos(angle1) + endPoint.x(), ARROW_HEAD_EDGE * qSin(angle1) + endPoint.y());
        p2 = QPoint(ARROW_HEAD_EDGE * qCos(angle2) + endPoint.x(), ARROW_HEAD_EDGE * qSin(angle2) + endPoint.y());
        lineEndPoint = QPoint( -ARROW_HEAD_SIZE * qCos(angle) + endPoint.x(), -ARROW_HEAD_SIZE * qSin(angle) + endPoint.y());
    }

    void setPen(const QPen& pen) {
        this->pen = pen;
        this->pen.setCapStyle(Qt::RoundCap);
        this->pen.setJoinStyle(Qt::MiterJoin);
    }

private:
    QPoint startPoint;
    QPoint endPoint;
    QPoint lineEndPoint;
    QPoint p1;
    QPoint p2;


    static const float ARROW_ANGLE;
    static const float ARROW_HEAD_EDGE;
    static const float ARROW_HEAD_SIZE;
};

const float ArrowPaintingStep::ARROW_ANGLE = 3.14159265359 / 8;
const float ArrowPaintingStep::ARROW_HEAD_EDGE = 40;
const float ArrowPaintingStep::ARROW_HEAD_SIZE = 15;
#endif // ARROWPAINTINGSTEP_H
