#ifndef DASHBOARD_H
#define DASHBOARD_H
#include <string>
#include <vector>
#include <utility>

class Dashboard {
public:
    void addCourse(const std::string& course, float grade);
    float gpa() const;
    int courseCount() const;
private:
    std::vector<std::pair<std::string, float>> courses;
};
#endif