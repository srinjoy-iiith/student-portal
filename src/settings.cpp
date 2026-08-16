#include "settings.h"

Settings::Settings() : theme("light"), notifications(true) {}

void Settings::setTheme(const std::string& theme) {
    this->theme = theme;
}

void Settings::toggleNotifications() {
    notifications = !notifications;
}

void Settings::resetDefaults() {
    theme = "light";
    notifications = true;
}

std::string Settings::summary() const {
    return "Theme: " + theme + " | Notifications: " + (notifications ? "on" : "off");
}