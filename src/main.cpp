#include <iostream>
#include <vector>
#include <string>
#include "student_record.h"
#include "dashboard.h"

int main() {
    std::cout << "=== Student Portal ===" << std::endl;

    Student s1(2026201054, "Srinjoy Majumdar", 8.7f);
    s1.display();

    std::vector<std::string> activeModules;

    // ---- MODULE REGISTRATION START ----
    Dashboard dash;
    dash.addCourse("SSD", 9.0f);
    dash.addCourse("Algorithms", 8.5f);
    activeModules.push_back("dashboard: top course = " + dash.topCourse());
    // ---- MODULE REGISTRATION END ----

    std::cout << "\nActive modules (" << activeModules.size() << "):" << std::endl;
    for (const auto& m : activeModules) {
        std::cout << "  * " << m << std::endl;
    }
    return 0;
}