

#include <iostream>
using namespace std;

int main()
{
	int time;
	cout << "What time is it?" << endl;
	cin >> time;
	if (time >=4 && time < 12)
	{
		cout << "Good morning!" << endl;

	}
	else if (time >=12 && time <= 18)
	{
		cout << "Have a nice day!" << endl;
	}
	else if (time >18 && time <= 22)
	{
		cout << "Have a great evening! " << endl;
	}
	else 
	{
		cout << "Good night!" << endl;
	}

	return 0;
}
