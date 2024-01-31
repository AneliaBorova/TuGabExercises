// 7.VeggieShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double veggieKg, fruitKg, veggiePrice, fruitPrice;
    cout << "How many kilos of vegetables did you sell?" << endl;
    cin >> veggieKg;
    cout << "How much does a kilo of vegetables cost?" << endl;
    cin >> veggiePrice;
    cout << "How many kilos of fruits did you sell?" << endl;
    cin >> fruitKg;
    cout << "How much does a kilo of fruits cost?" << endl;
    cin >> fruitPrice;

    double sum = veggieKg * veggiePrice + fruitKg * fruitPrice;
    cout.setf(ios::fixed);
    cout.precision(2);

    double sumInDollars = sum * 0.55372165;
    cout << "The total is: " << sumInDollars << " USD.";
    return 0;


    
    return 0;
}
