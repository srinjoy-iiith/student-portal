#include "auth.h"
#include <iostream>

void Auth::registerUser(const std::string& username, const std::string& password) {
    if (credentials.find(username) != credentials.end()) {
        std::cout << "User already exists: " << username << std::endl;
        return;
    }
    credentials[username] = password;
}

bool Auth::login(const std::string& username, const std::string& password) {
    auto it = credentials.find(username);
    if (it == credentials.end()) return false;
    if (it->second != password) return false;
    activeSessions.insert(username);
    return true;
}

void Auth::logout(const std::string& username) {
    activeSessions.erase(username);
}

bool Auth::isLoggedIn(const std::string& username) const {
    return activeSessions.count(username) > 0;
}