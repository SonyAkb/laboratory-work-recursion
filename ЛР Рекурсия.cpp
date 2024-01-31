#include <iostream>
#include <cmath>

using namespace std;

unsigned int Factorial_Recursive(unsigned int n){ //факториал через рекурсию
    if (n == 0)
        return 1;
    return n * Factorial_Recursive(n - 1);
}

unsigned int Factorial_Direct(unsigned int n){ //факториал через цикл
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

double Direct_Calculation(int n, double x) { // пр€мое вычисление значени€ функции
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, 2 * i + 1) / Factorial_Direct(2 * i + 1);
    } 
    return sum; 
}

double Recursive_Calculation(int n, double x) { // рекурсивное вычисление функции
    if (n == 0) {
        return x; // когда вычисл€етс€ первый элемент р€да
    }
    else {                                                          
        return pow(x, 2 * n + 1) / Factorial_Recursive(2 * n + 1) + Recursive_Calculation(n - 1, x);
        //pow(x, 2 * n + 1)  возвожу в неоюходимую степень
        //Factorial_Recursive(2 * n + 1)  вычисл€ю факториал
        //Recursive_Calculation(n - 1, x)  прибавл€ю предыдущее значение р€да
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n; //количество членов р€да
    double x; //переменна€

    do{
        cout << "¬ведите целое, положительное число n - количество членов р€да: ";
        cin >> n; //ввожу количество членов р€да
    } while (n < 1);
    
    cout << "¬ведите число x - переменную: ";
    cin >> x; //ввожу переменную

    double result1 = Recursive_Calculation(n - 1, x);
    double result2 = Direct_Calculation(n, x);

    cout << "–езультат через сумму функционального р€да: " << result1 << endl;
    cout << "–езультат через пр€мое вычисление значени€ функции: " << result2 << endl;

    return 0;
}
