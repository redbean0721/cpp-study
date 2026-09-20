// ex3-2.cpp
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string name;
    char classNo;
    int year;
    double gpa;

    getline(std::cin, name);
    std::cin >> classNo;
    std::cin >> year;
    std::cin >> gpa;

    std::cout << std::left  << std::setw(20) << "Name"
              << std::right << std::setw(6)  << "Class"
                            << std::setw(10) << "Year"
                            << std::setw(12) << "GPA" << std::endl;

    std::cout << std::left  << std::setw(20) << name
              << std::right << std::setw(6)  << classNo
                            << std::setw(10) << year
                            << std::fixed
                            << std::setprecision(2)
                            << std::setw(12) << gpa << std::endl;

    return 0;
}
