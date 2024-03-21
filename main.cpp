#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Выберите операцию:\n";
    cout << "1. Сложение\n";
    cout << "2. Вычитание\n";
    cout << "3. Умножение\n";
    cout << "4. Деление\n";
    cin >> choice;

    switch (choice) {
        case 1:
            // вызов функции суммирования
            cout << "Суммирование в разработке\n";
            break;
        case 2:
            // вызов функции вычитания
            cout << "Вычитание в разработке\n";
            break;
        case 3:
            // вызов функции умножения
            cout << "Умножение в разработке\n";
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