#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

/*int a;

int f(int n)
{
	if (n == 0)
		return 3;
	else return f(n - 1) + 2;
}

int main()
{
	
	cin >> a;
	cout << f(a);
	return 0;
}*/


//power of...

/*int a, b;

double power(int a, int b)
{
	if (b == 0)
		return 1;
	else return power(a, b - 1) * a;
}


int main() {
	cout << "Please insert a number which you want to power: ";
	cin >> a;
	cout << "Please give power: ";
	cin>> b;
	cout << "The number: " << a<< " to the power of " << b << " is equal to "<< power(a, b);

	return 0;
}*/

//Fibonacci sequence
int n;
clock_t start, stop;
double time_wop;
double fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (n > 2)
		return fib(n - 1) + fib(n-2);
}

int main()
{

	cout << "Please insert a number ";
	cin >> n;
	start = clock();
	cout << "This number represents number " << fib(n);
	stop = clock();
	cout<< " in Fibonacci sequence." << endl;
	time_wop = ((double)stop - (double)start) / CLOCKS_PER_SEC;
	cout << "Time of the write" << time_wop << endl;

return 0;
}