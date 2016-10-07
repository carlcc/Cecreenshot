#include "configmanager.h"

ConfigManager *ConfigManager::_instance = 0;

ConfigManager *ConfigManager::instance()
{
    if (_instance == NULL) {
        _instance = new ConfigManager();
    }
    return _instance;
}

ConfigManager::ConfigManager()
{
    _selectedBoarderColor = QColor(0xff, 0, 0, 255);
    _maskColor = QColor(0x35, 0x35, 0x35, 0x85);
}

ConfigManager::~ConfigManager()
{

}

QColor &ConfigManager::selectedBoarderColor()
{
    return _selectedBoarderColor;
}

QColor &ConfigManager::maskColor()
{
    return _maskColor;
}
