#include<iostream>
using namespace std;
double a, b, c;
int main()
{
	while (cin >> a >> b >> c)
	{
		if (b * b - 4 * a * c < 0)
		{
			cout << 0<< endl;
		}
		else if (b * b - 4 * a * c == 0)
		{
			cout << 1<< endl;
		}
		else
		{
			cout << 2<< endl;
		}
	}
	return 0;
}