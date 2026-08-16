#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings {
public:
    Settings();
    void setTheme(const std::string& theme);
    void toggleNotifications();
    void resetDefaults();
    std::string summary() const;

private:
    std::string theme;
    bool notifications;
};

#endif