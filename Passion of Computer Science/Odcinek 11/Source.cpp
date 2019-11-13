#include<iostream>
using namespace std;

//finding max value

signed int a, b, c;

int main()
{
	cout << "Please insert 3 numbers (with space after each): ";
	cin >> a >> b >> c;

	if (a >= b && a >= c)
		cout << "Max value is a:" << a;
	else if (b >= a && b >= c)
		cout << "Max value is b: " << b;
	else if (c >= b && c >= c)
		cout << "Max value is c: " << c;

	return 0;
}