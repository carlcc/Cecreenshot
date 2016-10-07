#ifndef MOSAICPAINTINGSTEP_H
#define MOSAICPAINTINGSTEP_H
#include <QImage>
#include <QRgb>
#include <QPoint>
#include "ipaintingstep.h"

class MosaicPaintingStep: public IPaintingStep
{
public:
    MosaicPaintingStep(QImage *image):
        image(image), mosaic(0), blockSize(10), end(false) {
    }

    void paint(QPainter *painter) {
//        image->pi

        QRect rect;
        if (point1.x() > point2.x()) {
            rect.setLeft(point2.x());
            rect.setRight(point1.x());
        } else {
            rect.setLeft(point1.x());
            rect.setRight(point2.x());
        }
        if (point1.y() > point2.y()) {
            rect.setTop(point2.y());
            rect.setBottom(point1.y());
        } else {
            rect.setTop(point1.y());
            rect.setBottom(point2.y());
        }
        if (mosaic == 0) {
            QImage *mosaicImg = new QImage(*image);
            int rowCnt = (image->height() + blockSize - 1) / blockSize;
            int colCnt = (image->width() + blockSize - 1) / blockSize;
            int count = blockSize * blockSize;

            for (int i = 0; i < rowCnt; ++i) {
                for (int j = 0; j < colCnt; ++j) {
                    uint r = 0;
                    uint g = 0;
                    uint b = 0;
                    for (int k = 0; k < blockSize; ++k) {
                        for (int l = 0; l < blockSize; ++l) {
                            uint color = image->pixelColor(j * blockSize + l, i * blockSize + k).rgb();
                            r += color >> 16;
                            g += color >> 8 & 0xff;
                            b += color & 0xff;
                        }
                    }
                    r /= count;
                    g /= count;
                    b /= count;
                    uint rgb = (r << 16) + (g << 8) + b;
                    for (int k = 0; k < blockSize; ++k) {
                        for (int l = 0; l < blockSize; ++l) {
                            mosaicImg->setPixel(j * blockSize + l, i * blockSize + k, rgb);
                        }
                    }
                }
            }

            mosaic = new QImage(mosaicImg->copy(rect));
        }
        painter->drawImage(rect.left(), rect.top(), *mosaic);
        if (!end) {
            painter->drawRect(rect.left(), rect.top(), rect.width() - 1, rect.height() - 1);
        }
    }

    void setFirstPoint(const QPoint &p) {
        point1 = p;
        mosaic = 0;
    }

    void setSecondPoint(const QPoint &p) {
        point2 = p;
        mosaic = 0;
    }

    void setBlockSize(const int size) {\
        blockSize = size;
        mosaic = 0;
    }

    void endSelect() {
        end = true;
    }


private:
    QImage *image;
    QImage *mosaic;
    QPoint point1;
    QPoint point2;
    int blockSize;
    bool end;

};

#endif // MOSAICPAINTINGSTEP_H
