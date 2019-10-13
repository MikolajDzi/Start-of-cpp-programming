#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>
using namespace std;
int number, guess, guess_time=0;

//Number riddle
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
}