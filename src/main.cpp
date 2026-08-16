#include <iostream>
#include <vector>
#include <string>
#include "student_record.h"
#include "auth.h"
#include "profile.h"
#include "dashboard.h"
#include "settings.h"

int main() {
    std::cout << "=== Student Portal ===" << std::endl;

    Student s1(2026201054, "Srinjoy Majumdar", 8.7f);
    s1.display();

    std::vector<std::string> activeModules;
    // Demonstrate logout: end the session after registration
    Auth sessionDemo;
    sessionDemo.registerUser("temp", "pass123");
    sessionDemo.login("temp", "pass123");
    sessionDemo.logout("temp");
    activeModules.push_back(std::string("session demo: logged in then out = ")
        + (sessionDemo.isLoggedIn("temp") ? "still in" : "logged out"));
    // ---- MODULE REGISTRATION START ----
    Auth auth;
    auth.registerUser("srinjoy", "gitlab123");
    if (auth.login("srinjoy", "gitlab123")) {
        activeModules.push_back("login (session active)");
    }
    Profile profile("Srinjoy Majumdar");
    profile.setBio("M.Tech CSE, IIIT-H");
    profile.setEmail("srinjoy.majumdar.iiit@gmail.com");
    activeModules.push_back(profile.render());
    Dashboard dash;
    dash.addCourse("SSD", 9.0f);
    dash.addCourse("Algorithms", 8.5f);
    activeModules.push_back("dashboard: top course = " + dash.topCourse());
    Settings settings;
    settings.setTheme("dark");
    settings.toggleNotifications();
    activeModules.push_back("settings: " + settings.summary());
    // ---- MODULE REGISTRATION END ----

    std::cout << "\nActive modules (" << activeModules.size() << "):" << std::endl;
    for (const auto& m : activeModules) {
        std::cout << "  * " << m << std::endl;
    }
    std::cout << "\nThank you for using Student Portal." << std::endl;
    return 0;
}