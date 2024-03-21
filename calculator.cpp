#include "calculator.h"
#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Деление на 0 невозможно!";
        return 0; // Обработка деления на ноль
    }
}