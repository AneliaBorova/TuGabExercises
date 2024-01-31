// 5.Zoo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int dogFood, catFood;
    cout << "How many packs of dog food do you need? ";
    cin >> dogFood;
    cout << "How many packs of cat food do you need? ";
    cin >> catFood;
    double sum = dogFood * 2.50 + catFood * 4.00;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The sum is: " << sum << " lv." << endl;
    return 0;
}
