#ifndef PROFILE_H
#define PROFILE_H
#include <string>

class Profile {
public:
    Profile(const std::string& owner);
    void setBio(const std::string& bio);
    std::string render() const;
private:
    std::string owner;
    std::string bio;
};
#endif