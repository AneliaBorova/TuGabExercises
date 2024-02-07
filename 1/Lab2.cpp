// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numbers[10];
	cout << "Please insert 10 integers." << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\n";
	for (int i = 10 - 1; i >= 0; i--)
	{
		cout << numbers[i] << " ";
	}
	


		return 0;
}

