// ex3-1.cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("data.txt");

    int a, b;

    while (file >> a >> b) {
        int area = a * b;
        int perimeter = 2 * (a + b);

        std::cout << "Area: " << area << ", Perimeter: " << perimeter << std::endl;
    }

    file.close();

    return 0;
}
