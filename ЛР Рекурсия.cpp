#include <iostream>
#include <cmath>

using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double Direct_Calculation(int n, double x) { // прямое вычисление значения функции
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, 2 * i + 1) / factorial(2 * i + 1);
        cout << i << ' ' << sum<<endl;
    }
    return sum; 
}

double Recursive_Calculation(int n, double x) {
    double qwe;
    if (n == 0) {
        return x; // базовый случай
    }
    else {
        qwe = pow(x, 2 * n + 1) / factorial(2 * n + 1) + Recursive_Calculation(n - 1, x);
        cout << n << ' ' << qwe << endl;
        return qwe; // рекурсивный случай
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 5;
    double x = 2;

    double result1 = Recursive_Calculation(n - 1, x);
    cout << "-----" << endl;
    double result2 = Direct_Calculation(n, x);

    cout << "Результат через сумму функционального ряда: " << result1 << endl;
    
    cout << "Результат через прямое вычисление значения функции: " << result2 << endl;

    return 0;
}
