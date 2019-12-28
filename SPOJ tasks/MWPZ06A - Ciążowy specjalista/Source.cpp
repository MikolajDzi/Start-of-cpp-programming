#include<iostream>
#include<cmath>
using namespace std;
float result, test, x, y, z;

int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> x >> y >> z;
		result = (x + y - z * y) / (z - 1) *12;
		if (result < 0)
		{
			result = result * (-1);
		}
		cout << round(result) << endl;
	}
	return 0;
}