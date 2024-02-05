

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "What month is it? ";
    cin >> month;
    string season;
    switch (month)
    {
    case 1:
    case 2:
    case 12:
        season = "Winter";
        break;
    case 3:
    case 4:
    case 5:
        season = "Spring";
        break;
    case 6:
    case 7:
    case 8:
        season = "Summer";
    case 9:
    case 10:
    case 11:
        season = "Autumn";
        break;
    default:
        season = "Invalid month";
        break;
    }

    cout << season;
    return 0;

}

