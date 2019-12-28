#include<iostream>
using namespace std;
int n, test, result;
int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> n;
		if (n <= 1)
		{
			result = 1;
		}
		else if (n > 9)
		{
			result = 0;
		}
		else
		{
			result = 1;
			for (int j = 1; j <= n; j++)
			{
				result = result * j;
			}
		}
		cout << result%100/10 <<' '<< result%10 << endl;
	}
	return 0;
}