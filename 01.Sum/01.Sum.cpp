// 01.Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i, result;
	result = 0;
	int sum = 1;
    cin >> i;
	while (i!= 0)
	{
		result += i;
		sum *= i;
		cin >> i;
	}
	cout << result;
	cout << sum;
	return 0;


}

