#include "Value.h"
#include "Value.cpp"
#include <iostream>

int main()
{
	int choice;
	Energy energy;
	std::cout << "Measurement options:\n";
	std::cout << "1 - read in joules, 2 - read in ergs, 3 - read in electronvolts\n";
	std::cin >> choice;
	std::cout << "Enter your value: ";
	switch (choice) {
		case(1):
			energy.readInJoules();
			break;
		case(2):
			energy.readInErgs();
			break;
		case(3):
			energy.readInEvs();
			break;
	}
	energy.showValue();
	return 0;
}