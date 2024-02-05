

#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    char sign;
    if (a <b)
    {
        sign = '<';
    }
    else if ( a > b)
    {
        sign = '>';
    }
    else
    {
        sign = '=';
    }

    cout << a << " " << sign << " " << b;
    return 0;


}
