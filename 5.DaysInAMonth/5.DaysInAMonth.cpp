
#include <iostream>
#include <cstring>
#include <cstdio>



int main()
{
	using namespace std;

	string month;
	int year;
	int days;
	cout << "What month is it? ";
	cin >> month;
	cout << "What year is it? ";
	cin >> year;
	
	

	
	
	if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December" )
	{
		days = 31;
	}
	else if (month == "April" || month == "June" || month == "September" || month == "November" )
	{
		days = 30;
	}
	else
	{
		if (year % 400 == 0 || ((year % 100 != 0) && (year % 4 == 0)))
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
		
	}
	

	cout << month<<" "<<year<< " has " << days << " days.";

	return 0;

}
