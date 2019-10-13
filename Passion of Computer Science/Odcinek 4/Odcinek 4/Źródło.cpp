#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>
#include<windows.h>

using namespace std;

//Number riddle
/*int number, guess, guess_time=0;


int main()
{
	cout << "I thought of a number from 1 to 100" << endl;
	srand(time(NULL));
	number = rand() % 100 + 1;
	//cout << number << endl;
	
	while (guess!=number)
	{
		guess_time++;
		cout << "Take a guess, what is the number? ";
		cin >> guess;
		if (guess == number)
		{
			cout << "You guesed, good job. Number "<< number << " is correct." << endl;
			cout << "It took you " << guess_time << " attempts." << endl;
		}
		else if (guess < number)
		{
			cout << "Nah it's too low, try again." << endl;
			cout << "It's your " << guess_time << " attempt." << endl;
		}
		else if (guess > number)
		{
			cout << "Unfortunately it's too big, try again," << endl;
			cout << "It's your " << guess_time << " attempt." << endl;
		}
	}
	getchar();getchar();
	//system("pause");
	return 0;
}*/

//lotto

int number;

int main()
{
	cout << "Welcome everyone to the big LOTTO contest! In a couple of seconds we will start to draw the numbers." << endl;
	Sleep(3000);
	srand(time(NULL));

	for (int i = 1; i <= 6; i++)
	{
		number = rand() % 49 + 1;
		Sleep(1000);
		cout << number<<"\a" << endl;
	}
	return 0;
}
