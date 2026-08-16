#include "auth.h"
#include <iostream>

void Auth::registerUser(const std::string& username, const std::string& password) {
    if (credentials.find(username) != credentials.end()) {
        std::cout << "User already exists: " << username << std::endl;
        return;
    }
    credentials[username] = password;
}

bool Auth::login(const std::string& username, const std::string& password) const {
    auto it = credentials.find(username);
    if (it == credentials.end()) return false;
    return it->second == password;
}