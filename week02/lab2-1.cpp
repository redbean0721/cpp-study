// lab2-1.cpp
#include <iostream>

#define PI 3.14159
const double PI_1 = 3.14159;
const double PI_2 = 3 + 0.14159;

int main() {
    int r = 5;
    double area = PI * r * r;
    double area1 = PI_1 * r * r;
    double area2 = PI_2 * r * r;

    std::cout << "Circle radius = " << r << ", Area = " << area1 << std::endl;
    std::cout << "Area with explicit casting = " << area2 << std::endl;

    return 0;
}
