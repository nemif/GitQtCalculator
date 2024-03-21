#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
 setlocale(LC_ALL, "Russian");
    int choice, a,b;
    cout << "Добро пожаловать в калькулятор!\n";
    cout << "Выберите операцию:\n";
    cout << "1. Сложение\n";
    cout << "2. Вычитание\n";
    cout << "3. Умножение\n";
    cout << "4. Деление\n";
    cin >> choice;
cout << "Введите два числа: ";
    cin >> a >> b;
    switch (choice) {
        case 1:
            cout << "Сумма: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "Разность: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Произведение: " << multiply(a, b) << endl;
            break;
        case 4:
            // вызов функции деления
            cout << "Деление в разработке\n";
            break;
        default:
            cout << "Некорректный выбор\n";
    }

    return 0;
}