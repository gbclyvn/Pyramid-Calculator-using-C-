#include <iostream>
#include <string>

int main() 
{
    std::string ngalan, section;

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, ngalan);

    std::cout << "Enter Section: ";
    std::getline(std::cin, section);

    double b, h, s;

    std::cout << "\nEnter b: ";
    std::cin >> b;

    std::cout << "Enter h: ";
    std::cin >> h;

    std::cout << "Enter s: ";
    std::cin >> s;

    double surfaceArea = (b * b) + (2 * b * s);
    double volume = (1.0 / 3.0) * (b * b) * h;

    std::cout << "\n----- PYRAMID CALCULATOR -----\n";
    std::cout << "Student Name: " << ngalan << "\n";
    std::cout << "Section: " << section << "\n";

    std::cout << "\nSurface Area of Square Pyramid: " << surfaceArea << "\n";
    std::cout << "Volume of Square Pyramid: " << volume << "\n";

    return 0;
}
