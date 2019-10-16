#include<iostream>  
#include<iomanip>

using namespace std;
long double fib[1000000];
int limit;
 
//float sum;
//float marks[5];

/*int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Please insert "<< i+1 << " mark: ";
		cin >> marks[i];
		cout << endl;
		sum += marks[i];
	}
	cout << "Here is the average of the marks: " << sum / 5;

	return 0;
}*/

int main()
{
	cout << "How many Fibonacci numbers you want to count? ";
	cin >> limit;

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < limit; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << setprecision(100000);
	/*for (int i = 0; i < limit; i++)
	{
		cout << endl << "Number " << i + 1 << ": " << fib[i]; 
	}*/

	cout << "Number " << limit << ": " << fib[limit - 1];
	cout << "Golden number: " << fib[limit - 1] / fib[limit - 2];

	return 0;
}
