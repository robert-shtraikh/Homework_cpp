#include <iostream>

int main()
{
    setlocale(LC_ALL, "");  //Кириллица
    enum months { January, February, March, April, May, June, July, August, September, October, November, December };
    int leap, days, inputMonth;
    std::cout << "Год високосный? 1 - да, 2 - нет" << std::endl;
    std::cin >> leap;
    std::cout << "Введите номер месяца: ";
    std::cin >> inputMonth; // ввожу номер месяца
    months whatMonth = static_cast<months>(inputMonth - 1); // помещаю это число в перечисляемый тип, -1 из-за индексации с 0
    switch(whatMonth) {
        case January:
            days = 31;
            break;
        case February:
            switch (leap)
            {
            case 1:
                days = 29;
                break;
            case 2:
                days = 28;
                break;
            }
            break;
        case March:
            days = 31;
            break;
        case April:
            days = 30;
            break;
        case May:
            days = 31;
            break;
        case June:
            days = 30;
            break;
        case July:
            days = 31;
            break;
        case August:
            days = 31;
            break;
        case September:
            days = 30;
            break;
        case October:
            days = 31;
            break;
        case November:
            days = 30;
            break;
        case December:
            days = 31;
            break;
    }
    std::cout << "Количество дней в месяце: " << days;
}


