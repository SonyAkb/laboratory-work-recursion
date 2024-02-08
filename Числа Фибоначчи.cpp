#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int amount;
    cout << "������� ���������� ����� ���������, ������� ����� ������� ";
    cin >> amount;
    while (amount < 1) {
        cout << "���������� ����� �� ����� ���� ������ 1. ���������� ��� ���: ";
        cin >> amount;
    }
    for (int num = 0; num < amount; num++) {
        cout << fibonacci(num) << endl;
    }

    return 0;
}