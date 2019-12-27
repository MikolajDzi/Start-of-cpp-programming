#include <iostream>
using namespace std;

int a, b, test, w;
int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{	
		w = 1;
		cin >> a >> b;
		a =a % 10;
		for (int j = 0; j < (b - 1) % 4 + 1; j++)
		{
			w *= a;
		}
		cout << w % 10<< endl;
	}
	return 0;
}