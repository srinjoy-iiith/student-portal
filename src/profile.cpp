#include "profile.h"

Profile::Profile(const std::string& owner) : owner(owner), bio("No bio yet") {}

void Profile::setBio(const std::string& bio) {
    this->bio = bio;
}

std::string Profile::render() const {
    return "Profile of " + owner + ": " + bio;
}