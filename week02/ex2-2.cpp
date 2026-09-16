// ex2-2.cpp
#include <iostream>

int main() {
    int math = 80;
    int physics = 90;
    int chemistry = 70;

    float average = (math + physics + chemistry) / 3.0;
    float variance = ((math - average) * (math - average) + (physics - average) * (physics - average) + (chemistry - average) * (chemistry - average)) / 3.0;

    std::cout << "Math: " << math << std::endl;
    std::cout << "Physics: " << physics << std::endl;
    std::cout << "Chemistry: " << chemistry << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Variance: " << variance << std::endl;

    return 0;
}
