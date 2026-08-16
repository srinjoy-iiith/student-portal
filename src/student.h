#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(int id, const std::string& name, float gpa);
    void display() const;
    int getId() const;

private:
    int id;
    std::string name;
    float gpa;
};

#endif