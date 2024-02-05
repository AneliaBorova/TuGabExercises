

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a>0 && b>0 && c > 0 && a + b>c && a + c > b && b+c>a)
    {
        if (a == b && a == c)
        {
            cout << "The triangle is equilateral. ";
        }
        else if (a != b && a!=c && b!=c)
        {
            cout << "The triangle is scalene. ";

        }
        else
        {
            cout << "The triangle is isosceles. ";

        }
            
    }
    else
    {
        cout << "0";
    }

    return 0;


}

