#ifndef RECTPAINTINGSTEP_H
#define RECTPAINTINGSTEP_H

#include "ipaintingstep.h"

class RectPaintingStep: public IPaintingStep
{
public:
    RectPaintingStep() {

    }


    void setFirstPoint(const QPoint &p) {
        rectangle.setLeft(p.x());
        rectangle.setTop(p.y());
    }

    void setSecondPoint(const QPoint &p) {
        rectangle.setRight(p.x());
        rectangle.setBottom(p.y());
    }

    void paint(QPainter *painter) {
        QPen backup = painter->pen();
        painter->setPen(pen);
        painter->drawRect(rectangle.left(), rectangle.top(), rectangle.width() - 1, rectangle.height() - 1);
        painter->setPen(backup);
    }

private:
    QRect rectangle;
};

#endif // RECTPAINTINGSTEP_H
