// ex2-1.cpp
#include <iostream>

int main() {
    int a = 4;
    int b = 7;
    int c = 2;
    int d = 6;

    double determinant = a * d - b * c;

    std::cout << "Original Matrix:" << std::endl;
    std::cout << a << " " << b << std::endl;
    std::cout << c << " " << d << std::endl;
    std::cout << "Inverse Matrix:" << std::endl;
    std::cout << d / determinant << " " << -b / determinant << std::endl;
    std::cout << -c / determinant << " " << a / determinant << std::endl;

    return 0;
}
