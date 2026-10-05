// ex5-2.cpp
#include <iostream>
#include <string>

int main() {
    std::string power;
    std::cin >> power;

    if (power == "off") {
        std::cout << "Standby\n";
    } else if (power == "on") {
        int mode;
        std::cin >> mode;

        switch (mode) {
            case 1:
                std::cout << "Nai Long\n";
                break;
            case 2:
                std::cout << "EE\n";
                break;
            case 3:
                std::cout << "115114514\n";
                break;
            default:
                break;
        }
    }

    return 0;
}
