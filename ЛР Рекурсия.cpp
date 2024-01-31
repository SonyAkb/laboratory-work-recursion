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

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 5;
    double x = 2;

    double result = Direct_Calculation(n, x);

    cout << "Результат через прямое вычисление значения функции: " << result << endl;

    return 0;
}
