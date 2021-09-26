#include <iostream>
#include <math.h>
#include <vector>
#include <functional>


double calculate(double x, double y, std::function<double(double x, double y)> f)
{
    return f(x, y);
}

int main()
{
    setlocale(LC_ALL, "");
    auto f = [](double x, double y) {return x + y; };   //auto - Компилятор сам определяет тип переменной
    auto g = [](double x, double y) {return x - y; };
    auto t = [](double x, double y) {return x * y; };
    auto z = [](double x, double y) {return x / y; };
    auto h = [](double x, double y) {return pow(x, y); };
    std::vector<std::function<double(double x, double y)>> vec;    //вектор из функций
    vec.push_back(f);
    vec.push_back(g);
    vec.push_back(t);
    vec.push_back(z);
    vec.push_back(h);
    
    double x, y, result;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    for (int i = 0; i < 5; i++) {
        if (i == 0)
            std::cout << "x + y = ";
        if (i == 1)
            std::cout << "x - y = ";
        if (i == 2)
            std::cout << "x * y = ";
        if (i == 3)
            std::cout << "x / y = ";
        if (i == 4)
            std::cout << "x ^ y = ";
        result = calculate(x, y, vec[i]);
        std::cout << result << std::endl;
    }
}

