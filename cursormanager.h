#ifndef CURSORMANAGER_H
#define CURSORMANAGER_H

#include <QCursor>
#include <QMap>
#include <QString>
#include <QPixmap>



class CursorManager
{
public:
    static QCursor& loadCursor(const QString &imgPath);

private:
    static QMap<QString, QCursor> stringCursorMap;
    CursorManager();
};

#endif // CURSORMANAGER_H
