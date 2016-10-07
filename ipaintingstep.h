#ifndef IPAINTINGSTEP_H
#define IPAINTINGSTEP_H
#include "commondef.h"
#include <QPainter>
#include <QPen>

class IPaintingStep
{
public:
    virtual void paint(QPainter *painter) = 0;
    virtual ~IPaintingStep() {

    }

    void setPen(const QPen& pen) {
        this->pen = pen;
    }

protected:
    QPen pen;
};

#endif // IPAINTINGSTEP_H
