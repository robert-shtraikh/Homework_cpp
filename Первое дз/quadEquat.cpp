// quadEquat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x1, x2, discriminant;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "No roots";
    }
    else {
        x1 = (-b + pow(discriminant, 0.5)) / 2 / a;
        x2 = (-b - pow(discriminant, 0.5)) / 2 / a;
        if (x1 == x2) {
            cout << "x = " << x1;
        }
        else {
            cout << "x1 = " << x1;
            cout << "x2 = " << x2;
        }
    }
}


