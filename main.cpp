// main.cpp
#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;

    // Запит у користувача кількості елементів
    int n;
    std::cout << "Введіть кількість елементів для обчислення ряду: ";
    std::cin >> n;

    // Обчислення результату
    double result = func.calculate(n);
    std::cout << "Результат обчислення суми перших " << n << " елементів: " << result << std::endl;

    return 0;
}
