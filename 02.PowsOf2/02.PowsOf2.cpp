// 02.PowsOf2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int result = 1;
    cin >> n;

   /* result = pow(2, n);
    cout << result;
    return 0;

    */
    for (int i = 1; i <= n; i++)
    {
        result *= 2;
    }
    cout << result;
    return 0;

}

