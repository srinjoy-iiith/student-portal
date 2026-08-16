#ifndef AUTH_H
#define AUTH_H

#include <string>
#include <unordered_map>
#include <unordered_set>

class Auth {
public:
    void registerUser(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password);
    void logout(const std::string& username);
    bool isLoggedIn(const std::string& username) const;

private:
    std::unordered_map<std::string, std::string> credentials;
    std::unordered_set<std::string> activeSessions;
};

#endif