// lab4-1.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main() {
    int a = 5, b = 2;
    std::cout << "a / b = " << a / b << std::endl;

    int angle = 90;

    std::cout << "sin(90) = " << sin(angle) << std::endl;

    std::cout << "Random number (1~100): " << rand() % 100 << std::endl;

    double y = 2.5;
    std::cout << "floor(2.5) = " << floor(y) << std::endl;
    std::cout << "ceil(2.5) = " << ceil(y) << std::endl;
    std::cout << "round(2.5) = " << round(y) << std::endl;

    return 0;
}
