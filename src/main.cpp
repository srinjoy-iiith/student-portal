#include <iostream>
#include <vector>
#include <string>
#include "student_record.h"
#include "profile.h"

int main() {
    std::cout << "=== Student Portal ===" << std::endl;

    Student s1(2026201054, "Srinjoy Majumdar", 8.7f);
    s1.display();

    std::vector<std::string> activeModules;

    // ---- MODULE REGISTRATION START ----
    Profile profile("Srinjoy Majumdar");
    profile.setBio("M.Tech CSE, IIIT-H");
    profile.setEmail("srinjoy.majumdar.iiit@gmail.com");
    activeModules.push_back(profile.render());
    // ---- MODULE REGISTRATION END ----

    std::cout << "\nActive modules (" << activeModules.size() << "):" << std::endl;
    for (const auto& m : activeModules) {
        std::cout << "  * " << m << std::endl;
    }
    return 0;
}