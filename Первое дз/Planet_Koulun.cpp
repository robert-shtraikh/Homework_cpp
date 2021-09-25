// Planet_Koulun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip> //setfill с ним работает
using namespace std;

int main()
{
    string productsName, cashBool;
    int produtsPrice, maxTemp; 
    bool cashBack;
    cout << "Product's name: ";
    cin >> productsName;
    cout << "Product's price: ";
    cin >> produtsPrice;
    cout << "Is cash-back available for this product? (true/false) ";
    cin >> cashBool;
    if (cashBool == "false") {
        cashBack = 0;
    }
    else {
        cashBack = 1;
    }
    cout << "Maximum storing temperature: ";
    cin >> maxTemp;
    cout << productsName << endl;
    cout << "Price:..........." << setfill('0') << setw(8) << uppercase << hex << produtsPrice << ends << endl;
    cout << "Has cash-back:" << setfill('.') << setw(11) << boolalpha << cashBack << ends << endl;
    if (maxTemp > 0) {
        cout << "Max temperature:" << setfill('.') << setw(7) << "+" << dec << maxTemp << ends << endl;
    }
    if (maxTemp == 0) {
        cout << "Max temperature:" << setfill('.') << setw(7) << dec << maxTemp << ends << endl;
    }
    if (maxTemp < 0) {
        cout << "Max temperature:" << setfill('.') << setw(7) << "-" << dec << maxTemp << ends << endl;
    }
    

}