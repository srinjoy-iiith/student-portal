#ifndef AUTH_H
#define AUTH_H
#include <string>
#include <unordered_map>

class Auth {
public:
    void registerUser(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password) const;
private:
    std::unordered_map<std::string, std::string> credentials;
};
#endif