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

std::string Dashboard::topCourse() const {
    if (courses.empty()) return "none";
    std::string best = courses[0].first;
    float bestGrade = courses[0].second;
    for (const auto& c : courses) {
        if (c.second > bestGrade) {
            bestGrade = c.second;
            best = c.first;
        }
    }
    return best;
}