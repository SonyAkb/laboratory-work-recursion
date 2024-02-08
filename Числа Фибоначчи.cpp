#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
    // сумма 2х предыдущих чисел ряда Фибоначчи
}

int main() {
    setlocale(LC_ALL, "Russian");
    int amount;
    cout << "Введите количество чисел Фибоначчи, которое нужно вывести ";
    cin >> amount;
    while (amount < 1) {
        cout << "Количество чисел не может быть меньше 1. Попробуйте еще раз: ";
        cin >> amount;
    }
    for (int num = 0; num < amount; num++) { //вывод чисел ряда Фибоначчи
        cout << fibonacci(num) << endl;
    }
    return 0;
}