#include <iostream>
using namespace std;

int a, b, test, w=1;
int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> a >> b;
		a %= 10;
		for (int j = 0; j < (b - 1) % 4 + 1; j++)
		{
			w *= a;
		}
		cout << w << endl;
		cout << w % 10<< endl;
	}
	return 0;
}