#ifndef OVALPAINTINGSTEP_H
#define OVALPAINTINGSTEP_H

#include "ipaintingstep.h"

class OvalPaintingStep: public IPaintingStep
{
public:
    OvalPaintingStep() {

    }

    void paint(QPainter *painter) {
        QPen backup = painter->pen();
        painter->setPen(pen);
        painter->drawEllipse(closure.left(), closure.top(), closure.width()-1, closure.height()-1);
        painter->setPen(backup);
    }

    void setFirstPoint(const QPoint &p) {
        closure.setLeft(p.x());
        closure.setTop(p.y());
    }

    void setSecondPoint(const QPoint &p) {
        closure.setRight(p.x());
        closure.setBottom(p.y());
    }


private:
    QRect closure;
};

#endif // OVALPAINTINGSTEP_H
