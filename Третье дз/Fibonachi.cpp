// Fibonachi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int fibonacci(int number) 
{
    if (number == 0)
        return 0; //базовый случай (условие завершения)
    if (number == 1)
        return 1; //базовый случай
    return fibonacci(number - 1) + fibonacci(number - 2);
}

//Считаем числа Фибоначчи и выводим заданное пользователем
int main()
{
    int number, numeric_fib;
    std::cout << "enter the number of the required numeric: ";
    std::cin >> number;
    for (int i = 0; i <= number; i++)
        numeric_fib = fibonacci(i);
    std::cout << "The required Fibonacci number: " << numeric_fib;

}


