#include <iostream>
#include <cmath>

using namespace std;

unsigned int Factorial_Recursive(unsigned int n){ //��������� ����� ��������
    if (n == 0)
        return 1;
    return n * Factorial_Recursive(n - 1);
}

unsigned int Factorial_Direct(unsigned int n){ //��������� ����� ����
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

double Direct_Calculation(int n, double x) { // ������ ���������� �������� �������
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, 2 * i + 1) / Factorial_Direct(2 * i + 1);
    } 
    return sum; 
}

double Recursive_Calculation(int n, double x) { // ����������� ���������� �������
    if (n == 0) {
        return x; // ����� ����������� ������ ������� ����
    }
    else {                                                          
        return pow(x, 2 * n + 1) / Factorial_Recursive(2 * n + 1) + Recursive_Calculation(n - 1, x);
        //pow(x, 2 * n + 1)  ������� � ����������� �������
        //Factorial_Recursive(2 * n + 1)  �������� ���������
        //Recursive_Calculation(n - 1, x)  ��������� ���������� �������� ����
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n; //���������� ������ ����
    double x; //����������

    do{
        cout << "������� �����, ������������� ����� n - ���������� ������ ����: ";
        cin >> n; //����� ���������� ������ ����
    } while (n < 1);
    
    cout << "������� ����� x - ����������: ";
    cin >> x; //����� ����������

    double result1 = Recursive_Calculation(n - 1, x);
    double result2 = Direct_Calculation(n, x);

    cout << "��������� ����� ����� ��������������� ����: " << result1 << endl;
    cout << "��������� ����� ������ ���������� �������� �������: " << result2 << endl;

    return 0;
}
