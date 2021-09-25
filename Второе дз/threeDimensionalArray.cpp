// threeDimensionalArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//typedef int* intptr;
//typedef int** ptr_to_intptr;
using intptr = int*;
using ptr_to_intptr = intptr*;
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter x>>";
    cin >> x;
    cout << "Enter y>>";
    cin >> y;
    cout << "Enter z>>";
    cin >> z;
	int*** p = new int** [x];
	for (int i = 0; i < x; i++)
	{
		p[i] = new int* [y];
		for (int j = 0; j < y; j++)
		{
			p[i][j] = new int[z];

			for (int k = 0; k < z; k++)
				p[i][j][k] = i * j * k;

		}
}

