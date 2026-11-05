#include <iostream>

int main() {
    double celsius;
    std::cout << "Nhap nhiet do (do C): ";
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    std::cout << celsius << " do C = " << fahrenheit << " do F" << std::endl;

    return 0;
}