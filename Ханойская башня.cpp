#include <iostream>
using namespace std;


int Han(int n, int start, int end, int point) {
    if (n > 0) {
        Han(n - 1, start, point, end);

        cout << start << " -> " << end << endl;

        Han(n - 1, point, end, start);
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int start, end, point, n;

    cout << "Ханойская башня" << endl << "Даны 3 стержня" << endl;
    do {
        cout << "Введите номер СТАРТОВОГО стержня (1, 2 или 3) ";
        cin >> start;
    } while (start < 1 || start>3);
    do {
        cout << "Введите номер КОНЕЧНОГО стержня (1, 2 или 3) ";
        cin >> end;
    } while (start < 1 || start>3 || start == end);

    switch (start + end) {
    case 3: point = 3; break;
    case 4: point = 2; break;
    default: point = 1; break;
    }

    do {
        cout << "Введите колличество обручей ";
        cin >> n;
    } while (n < 2);

    Han(n, start, end, point);

    return 0;
}

