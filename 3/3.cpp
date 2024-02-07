// 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int numbers[10];
	cout << "Please insert 10 integers." << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	int maxValue = INT_MIN;
	int maxValuePosition = 0;
	for (int i = 0; i < 10; i++)
	{
		int currentDigit = numbers[i];
		if (currentDigit>maxValue)
		{
			maxValue = currentDigit;
			maxValuePosition = i;
		}
	}

	cout << "The biggest digit is " << maxValue << " and its index in the array is " << maxValuePosition << ". ";




	return 0;
}