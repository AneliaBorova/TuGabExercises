// Ex4Page33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i ; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

}
