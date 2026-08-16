#include "dashboard.h"

void Dashboard::addCourse(const std::string& course, float grade) {
    courses.push_back({course, grade});
}

float Dashboard::gpa() const {
    if (courses.empty()) return 0.0f;
    float total = 0.0f;
    for (const auto& c : courses) total += c.second;
    return total / courses.size();
}

int Dashboard::courseCount() const {
    return courses.size();
}