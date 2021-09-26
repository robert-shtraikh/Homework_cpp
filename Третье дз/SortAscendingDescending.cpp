#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	setlocale(LC_ALL, ""); //кириллица
	std::vector<int> array;
	int n, input;
	double elem;
	std::cout << "Введите количество элементов: ";
	std::cin >> n;
	std::cout << "Введите элементы" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cin >> elem;
		array.push_back(elem);
	}
	std::cout << "Массив до сортировки" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Какую сортировку произвести?" << std::endl;
	std::cout << "1. По возрастанию; " << "2. По убыванию" << std::endl;
	std::cin >> input;
	switch(input)
	{
	case 1:
		std::sort(array.begin(), array.end(), [](int a, int b) {return (a < b); });
		break;
	case 2:
		std::sort(array.begin(), array.end(), [](int a, int b) {return (a > b); });
		break;
	}
	std::cout << "Отсортированный массив" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
}

