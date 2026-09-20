// lab3-1.cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream file("simple1.txt");
    std::string words;

    getline(file, words);

    std::cout << words << std::endl;

    file.close();

    return 0;
}
