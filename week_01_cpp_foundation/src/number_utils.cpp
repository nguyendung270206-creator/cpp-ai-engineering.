#include "../include/number_utils.h"
#include <cmath>

namespace NumberUtils {
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= std::sqrt(n); ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }

    double square(double n) {
        return n * n;
    }

    double calculateAverage(double a, double b, double c) {
        return (a + b + c) / 3.0;
    }
}