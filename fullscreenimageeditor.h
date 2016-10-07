#ifndef FULLSCREENIMAGEEDITOR_H
#define FULLSCREENIMAGEEDITOR_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QRect>
#include <QPixmap>
#include <QPainter>
#include "paintinghistory.h"

namespace Ui {
class FullScreenImageEditor;
}


enum CanvasMode {
    INVALID = -1,
    IDLE = 0,
    SELECTING,
    SELECTED,
    RESIZING,
    MOVING,
    PAINTING
};

enum PaintingMode {
    PEN = 0,
    OVAL,
    ARROW,
    RECT,
    MOSAIC
};

enum MousePosition {
    North = 1,
    East = 2,
    South = 4,
    West = 8,
    Other = 16,
    NorthWest = North | West,
    NorthEast = North | East,
    SouthEast = South | East,
    SouthWest = South | West
};

enum PenWidth {
    PEN_SMALL = 2,
    PEN_NORMAL = 4,
    PEN_LARGE = 6
};

enum MosaicSize {
    MOSAIC_SMALL = 5,
    MOSAIC_NORMAL = 10,
    MOSAIC_LARGE = 15
};

enum MyCursor {
    PEN_CURSOR,
    CROSS_CURSOR
};

class FullScreenImageEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit FullScreenImageEditor(QPixmap &image, QWidget *parent = 0);
    ~FullScreenImageEditor();

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseDoubleClickEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);


private slots:

    void on_okButton_clicked();

    void on_saveButton_clicked();

    void on_penButton_clicked();

    void on_undoButton_clicked();

    void on_ovalButton_clicked();

    void on_rectButton_clicked();

    void on_arrowButton_clicked();

    void on_color_picked();


    void on_colorButton_clicked();

    void on_mosaicButton_clicked();

    void on_sizeButtonLarge_clicked();

    void on_sizeButtonNormal_clicked();

    void on_sizeButtonSmall_clicked();

private:
    bool isInSelectedArea(int x, int y);
    void changeCursorIfNessesary(int mouseX, int mouseY);
    void resizingSelectedArea(int mouseX, int mouseY);
    void moveSelectedAreaLimitInScreen(int mouseX, int mouseY);
    void selectArea(int mouseX, int mouseY);
    void moveCmdPanelToProperPosition();
    QPoint limitPointInSelectedArea(int x, int y);
    void myDispose();
    void updateDrawing(QMouseEvent *);

    void setCanvasMode(CanvasMode m);

    MosaicSize mosaicSize;
    QPen currentPen;
    QImage screenImage;
    QImage actualCanvas;
    QRect selectedArea;
    CanvasMode _canvasMode;
    CanvasMode canvasModeBackup;
    bool paintingStarted;
    PaintingMode paintingMode;
    MousePosition mousePosition;
    int mouseDownX;
    int mouseDownY;
    int originalSelectLeft;
    int originalSelectTop;
    PaintingHistory paintingHistory;

    CanvasMode getCanvasMode();

    Ui::FullScreenImageEditor *ui;

};

#endif // FULLSCREENIMAGEEDITOR_H
