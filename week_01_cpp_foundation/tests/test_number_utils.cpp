#include <iostream>
#include <cassert>
#include "../include/number_utils.h"

int main() {
    std::cout << "Running tests..." << std::endl;

    assert(NumberUtils::isPrime(7) == true);
    assert(NumberUtils::isPrime(4) == false);
    assert(NumberUtils::square(3.0) == 9.0);
    assert(NumberUtils::calculateAverage(3.0, 6.0, 9.0) == 6.0);

    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}