// FuncA.cpp
#include "FuncA.h"
#include <cmath>

/**
 * Реалізація функції обчислення суми перших n елементів.
 */
double FuncA::calculate(int n) {
    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        int factorial = 1;
        for (int j = 1; j <= 2 * i + 1; ++j) {
            factorial *= j;
        }
        result += std::pow(1.0, 2 * i + 1) / factorial;  // Вираз ряду для sh(x)
    }
    return result;
}
