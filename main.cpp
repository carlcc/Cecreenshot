#include "fullscreenimageeditor.h"
#include <QScreen>
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    int ret = 0;
    QApplication a(argc, argv);

    QPixmap image = QApplication::primaryScreen()->grabWindow(QApplication::desktop()->winId());
//    FullScreenImageEditor *editor = new FullScreenImageEditor(image);
    FullScreenImageEditor w(image);
//    w.show();
    w.showFullScreen();

    ret = a.exec();
    return ret;
}
