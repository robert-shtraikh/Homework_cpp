// MergeSortWithConsole.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <sstream>
#include "MergeSort.cpp"

int main(int argc, char** A_char)		//A_char = массив символов
{
	std::vector<std::string> A_string;	//строка
	//const char** filePtr = fileList;
	for (int i = 0; i < argc; i++)
		A_string.push_back(A_char[i]);

	//std::vector <int> A;
	//for (int i = 0; i < argc; i++)
		//A.push_back(int(A_char[i]));		
	std::vector<int> A_int;			//массив целых чисел
	for (int i = 0; i < argc; i++)
	{
		int num = atoi(A_string.at(i).c_str());
		A_int.push_back(num);
	}


	TopDownSplitMerge(0, A_int.size(), A_int);
	for (auto i : A_int) { std::cout << i << " "; };
	return 0;
}
//g++ -o merge.exe MergeSortWithConsole.cpp