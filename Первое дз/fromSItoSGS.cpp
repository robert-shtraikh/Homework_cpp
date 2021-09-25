// fromSItoSGS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include<cmath>
using namespace std;
int main() {
    const float pi = 3.14;
    double value;
    int16_t number;
    cout
        << "what physical quantity you are interested in? Please, enter the number " << "\n"
        << "1)electric charge" << "\n" << "2)electric flux" << "\n" << "3)electric current" << "\n" << "4)electric potential " << "\n" << "5)electric field"
        << "\n";
    cin >> number;

    if (number == 1) {
        cout << "Please,enter the value: ";
        cin >> value;
        cout << value / 10 << ", Franklin";
    }
    if (number == 2) {
        cout << "Please,enter the value: ";
        cin >> value;
        cout << value / 10 * 4 * pi << ", StatC";
    }
    if (number == 3) {
        std::cout << "Please,enter the value: ";
        std::cin >> value;
        std::cout << value / 10 << ", StatA";
    }
    if (number == 4) {
        cout << "Please,enter the value: ";
        cin >> value;
        cout << value * pow(10, 8) << ", StatV";
    }
    if (number == 5) {
        cout << "Please,enter the value: ";
        cin >> value;
        cout << value * pow(10, 6) << ", StatV/cm";
    }
}