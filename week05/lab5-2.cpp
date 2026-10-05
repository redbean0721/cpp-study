// lab5-2.cpp
#include <iostream>

int main() {
    int menu;
    std::cin >> menu;

    switch (menu) {
        // Correct
        case 1: std::cout << "Select 1\n"; break;
        case 2: std::cout << "Select 2\n"; break;
        default: std::cout << "Error\n";

        // Wrong
        // case 1: std::cout << "Select 1\n";
        // case 2: std::cout << "Select 2\n";
        // default: std::cout << "Error\n";
    }

    return 0;
}
