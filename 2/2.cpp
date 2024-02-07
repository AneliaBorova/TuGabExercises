// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double numbers[10];
	cout << "Please insert 10 integers." << endl;
	double sum = 0;
	double averageSum = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		sum += numbers[i];
	}
	averageSum = sum / 10;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << averageSum << endl;




	return 0;
}