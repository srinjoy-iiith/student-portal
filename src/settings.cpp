#include "settings.h"

Settings::Settings() : theme("light"), notifications(true) {}

void Settings::setTheme(const std::string& theme) {
    this->theme = theme;
}

void Settings::toggleNotifications() {
    notifications = !notifications;
}

std::string Settings::summary() const {
    return "Theme: " + theme + " | Notifications: " + (notifications ? "on" : "off");
}