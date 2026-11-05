#include <iostream>
#include "../include/number_utils.h"

int main() {
    std::cout << "=== CPP AI ENGINEERING - WEEK 01 ===" << std::endl;
    
    int num = 7;
    std::cout << "So " << num 
              << (NumberUtils::isPrime(num) ? " la so nguyen to." : " khong la so nguyen to.") 
              << std::endl;

    double val = 4.5;
    std::cout << "Binh phuong cua " << val << " la: " << NumberUtils::square(val) << std::endl;

    return 0;
}