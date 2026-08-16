#include <iostream>
#include "student_record.h"

int main() {
    std::cout << "=== Student Portal ===" << std::endl;

    Student s1(2026201054, "Srinjoy Majumdar", 8.7f);
    Student s2(2026201099, "Test User", 7.4f);

    s1.display();
    s2.display();

    return 0;
}