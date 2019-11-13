#include<iostream>
using namespace std;

//finding max value

signed int a, b, c;
int counter = 0;

int maximal(int a, int b, int c)
{
	int maxi=a;
	for (int i = 0; i < counter; i++)
	{
		if (b > maxi)
			maxi = b;
		if (c > maxi)
			maxi = c;
	}
	return maxi;

}

int main()
{
	cout << "Please insert 3 numbers (with space after each): ";
	cin >> a;
	counter++;
	cin >> b;
	counter++;
	cin >> c;
	counter++;

	/*if (a >= b && a >= c)
		cout << "Max value is a:" << a;
	else if (b >= a && b >= c)
		cout << "Max value is b: " << b;
	else if (c >= b && c >= c)
		cout << "Max value is c: " << c;*/

	cout << "Highest value is: " << maximal(a, b, c);

	return 0;
}

