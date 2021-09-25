// Exchange.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    double x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	x = x + y;
	y = y - x;
	y = -y;
	x = x - y;
	cout << "x = " << x << endl;
	cout << "y = " << y;
}


