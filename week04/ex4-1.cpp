// ex4-1.cpp
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main() {
    double x;
    std::cin >> x;

    double relu = std::max(0.0, x);
    double sigmoid = 1.0 / (1.0 + std::exp(-x));
    double softsign = x / (1.0 + std::abs(x));

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "ReLU: " << relu << "\n";
    std::cout << "Sigmoid: " << sigmoid << "\n";
    std::cout << "Softsign: " << softsign << "\n";

    return 0;
}
