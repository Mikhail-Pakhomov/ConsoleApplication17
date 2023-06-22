#include <iostream>
#include <cmath>
#include <windows.h>

double calculateTriangleArea(double base, double height) {
    if (base >= 0 && height >= 0) {
        return 0.5 * base * height;
    }
    else {
        return 0;
    }
}

double calculateRectangleArea(double length, double width) {
    if (length >= 0 && width >= 0) {
        return length * width;
    }
    else {
        return 0;
    }
}

double calculateRhombusArea(double diagonal1, double diagonal2) {
    if (diagonal1 >= 0 && diagonal2 >= 0) {
        return 0.5 * diagonal1 * diagonal2;
    }
    else {
        return 0;
    }
}

int main() {
    double base, height, length, width, diagonal1, diagonal2;

 
    std::cout << "Введіть довжину основи трикутника: ";
    std::cin >> base;
    std::cout << "Введіть висоту трикутника: ";
    std::cin >> height;
    double triangleArea = calculateTriangleArea(base, height);
    std::cout << "Площа трикутника: " << triangleArea << std::endl;


    std::cout << "Введіть довжину прямокутника: ";
    std::cin >> length;
    std::cout << "Введіть ширину прямокутника: ";
    std::cin >> width;
    double rectangleArea = calculateRectangleArea(length, width);
    std::cout << "Площа прямокутника: " << rectangleArea << std::endl;


    std::cout << "Введіть довжину першої діагоналі ромба: ";
    std::cin >> diagonal1;
    std::cout << "Введіть довжину другої діагоналі ромба: ";
    std::cin >> diagonal2;
    double rhombusArea = calculateRhombusArea(diagonal1, diagonal2);
    std::cout << "Площа ромба: " << rhombusArea << std::endl;

    return 0;
}