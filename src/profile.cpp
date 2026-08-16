#include "profile.h"

Profile::Profile(const std::string& owner)
    : owner(owner), bio("No bio yet"), email("not set") {}

void Profile::setBio(const std::string& bio) {
    this->bio = bio;
}

void Profile::setEmail(const std::string& email) {
    this->email = email;
}

std::string Profile::render() const {
    return "Profile of " + owner + ": " + bio + " <" + email + ">";
}