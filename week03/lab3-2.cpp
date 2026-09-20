// lib3-2.cpp
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::string subject;
    int score;

    std::cout << "Enter subject name: ";
    getline(std::cin, subject);

    std::cout << "Enter score: ";
    std::cin >> score;

    std::cout << "\n--- Report Card ---\n";
    std::cout << std::left << std::setw(12) << "Subject" << std::right << std::setw(8) << "Score" << std::endl;
    std::cout << std::left << std::setw(12) << subject << std::right << std::setw(8) << score << std::endl;

    double percentage = score / 100.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Percentage: " << percentage * 100 << "%\n";

    return 0;
}
