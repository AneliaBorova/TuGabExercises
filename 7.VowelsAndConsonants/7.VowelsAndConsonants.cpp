// 7.VowelsAndConsonants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Insert a letter. ";
    cin >> letter;
	string type;
	switch (letter)
	{
	case 'a':
	case'A':
	case 'e':
	case'E':
	case 'o':
	case 'O':
	case 'i':
	case 'I':
	case 'U':
	case 'u':
	case 'y':
	case 'Y':
		type = "vowel";
		break;


	default:
		type = "consonant";
		break;
	}
	cout << letter << " is a " << type<< ".";
	return 0;
}

