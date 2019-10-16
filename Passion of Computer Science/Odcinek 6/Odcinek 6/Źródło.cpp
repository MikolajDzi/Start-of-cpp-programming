#include<iostream>

using namespace std;

float a, b;
int choice;

int main()
{
	cout << "Please give me first number: ";
	cin >> a;
	cout << "Please give me second number: ";
	cin >> b;

	cout << endl;
	cout << "Main menu" << endl;
	cout << "-------------------------------" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction"<< endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Please choose which action you want to perform: ";
	cin >> choice;
	switch(choice)
	{
	case 1: 
		cout << a+b;
		break;
	case 2:
		cout << a-b;
		break;
	case 3:
		cout << a*b;
		break;
	case 4:
		cout << a/b;
		break;
	default:
		cout << "There is no such case, please try again.";
	}
	return 0;
}