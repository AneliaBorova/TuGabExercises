// 6.CtoF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	double celsius, fahrenheit;
	cout << "Degree Celsius = ";
	cin >> celsius;
	cout.setf(ios::fixed);
	cout.precision(2);
	fahrenheit = (celsius * (9.0 / 5.0)) + 32;
	cout << "Fahrenheit = " << fahrenheit; 
		return 0;
}

