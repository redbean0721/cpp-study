// ex4-2.cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double f1, f2;
    std::cin >> f1 >> f2;

    double magnitude_diff = -2.5 * std::log10(f1 / f2);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Magnitude Difference: " << magnitude_diff << "\n";
    
    return 0;
}
