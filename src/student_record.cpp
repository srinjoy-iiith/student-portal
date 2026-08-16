#include "student_record.h"
#include <iostream>

Student::Student(int id, const std::string& name, float gpa)
    : id(id), name(name), gpa(gpa) {}

void Student::display() const {
    std::cout << "ID: " << id << " | Name: " << name
              << " | GPA: " << gpa << std::endl;
}

int Student::getId() const {
    return id;
}