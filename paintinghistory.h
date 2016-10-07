#ifndef PAINTINGHISTORY_H
#define PAINTINGHISTORY_H
#include "ipaintingstep.h"
#include <QStack>

class PaintingHistory
{
public:
    PaintingHistory() {

    }

    ~PaintingHistory() {
        for (QStack<IPaintingStep *>::Iterator iter = history.begin(); iter != history.end(); ++iter) {
            delete (*iter);
        }
    }

    void doStep(IPaintingStep *step) {
        history.push(step);
    }

    IPaintingStep* undoStep(void) {
        if (history.isEmpty())
            return 0;
        return history.pop();
    }

    IPaintingStep* peekStep(void) {
        return history.top();
    }

    void paint(QPainter *painter) {
        for (QStack<IPaintingStep *>::Iterator iter = history.begin(); iter != history.end(); ++iter) {
            (*iter)->paint(painter);
        }
    }

    void clear() {
        history.clear();
    }

private:
    QStack<IPaintingStep *> history;
};

#endif // PAINTINGHISTORY_H
