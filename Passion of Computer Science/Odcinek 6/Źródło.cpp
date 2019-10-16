#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<conio.h>

using namespace std;

/*float a, b;
int choice;
char loop_end;
char clear;*/

int month_nr;

/*To get rid of the problem with crushing program
when user insert char instead of number is to change switch from int -> char*/

/*int main()
{
	while (loop_end != 'N' && loop_end != 'n')
	{
		cout << "Please give me first number: ";
		cin >> a;
		cout << "Please give me second number: ";
		cin >> b;

		cout << endl;
		cout << "Main menu" << endl;
		cout << "-------------------------------" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "Please choose which action you want to perform: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << a + b;
			break;
		case 2:
			cout << a - b;
			break;
		case 3:
			cout << a * b;
			break;
		case 4:
		{
			if (b != 0)
				cout << a / b;
			else
				cout << "You can't divide by 0!";
		}
		break;
		default:
			cout << "There is no such case, please try again.";
		}
		cout << endl << "If you want to continue please insert Y if not please insert N. Y/N? ";
		cin >> loop_end;
		cout << endl << "Do you want to clear the console? Y/N? ";
		cin >> clear;
		if (clear == 'y' || clear == 'Y')
			system("cls");
	}
	return 0;
}*/

//Program informs how many days have a month

int main()
{
	cout << "What month do you want to check? ";
	cin >> month_nr;

	switch (month_nr)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "This month have 31 days." << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "This month have 30 days." << endl;
		break;
	case 2:
		int year;
		cout << "Please insert number of the year: ";
		cin >> year;
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			cout << "This month have 29 days.";
		else
			cout << "This month have 28 days.";

		break;
	}

	return 0;
}
