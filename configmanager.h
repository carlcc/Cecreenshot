#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <QColor>

class ConfigManager
{
public:
    static ConfigManager *instance();

    QColor &selectedBoarderColor();
    QColor &maskColor();

private:
    static ConfigManager *_instance;

    QColor _selectedBoarderColor;
    QColor _maskColor;

    ConfigManager();
    ~ConfigManager();
};

#endif // CONFIGMANAGER_H
