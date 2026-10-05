// lab5-1.cpp
#include <iostream>

int main() {
    int ss;
    std::cin >> ss;

    // Correct
    std::cout << "Version 1: ";
    if (ss>=90) std::cout << "A" << std::endl;
    else if (ss>=80) std::cout << "B" << std::endl;
    else if (ss>=70) std::cout << "C" << std::endl;

    // Wrong
    std::cout << "Version 2: ";
    if (ss >= 90) std::cout << "A" << std::endl;
    if (ss >= 80) std::cout << "B" << std::endl;
    if (ss >= 70) std::cout << "C" << std::endl;

    // Correct but redundant
    std::cout << "Version 3: ";
    if (ss >= 90) std::cout << "A" << std::endl;
    if (ss >= 80 && ss < 90) std::cout << "B" << std::endl;
    if (ss >= 70 && ss < 80) std::cout << "C" << std::endl;

    return 0;
}
