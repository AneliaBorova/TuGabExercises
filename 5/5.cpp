// 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int array[3][3];
    int sum;
    
    cout << "Please insert the elements in your array. (3x3) \n Each elements must be on separate line." << endl;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];

        }
        
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j]<<" ";

        }
        cout << "\n";

    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += array[i][j];
            
        }
        cout << "The sum of all element on row " << i << " is: " << sum << endl;
    }

    return 0;
}

