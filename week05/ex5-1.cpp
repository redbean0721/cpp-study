// ex5-1.cpp
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("data.txt");

    int a, b, c;
    char op, eq;

    while (file >> a >> op >> b >> eq >> c) {
        bool isCorrect = false;

        switch (op) {
            case '+':
                if (a + b == c) isCorrect = true;
                break;
            case '-':
                if (a - b == c) isCorrect = true;
                break;
            case '*':
                if (a * b == c) isCorrect = true;
                break;
            case '/':
                if (b != 0 && a / b == c) isCorrect = true;
                break;
            default:
                break;
        }

        if (isCorrect) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }

    file.close();

    return 0;
}
