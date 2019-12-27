#include<iostream>
using namespace std;

int a, b, test;
int nwd(int a, int b) 
{
	while (a != b) 
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> a >> b;
		cout << nwd(a, b) <<endl;
	}
	return 0;
}