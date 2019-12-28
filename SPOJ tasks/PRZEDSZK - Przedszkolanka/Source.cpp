#include<iostream>
using namespace std;
int a, b, n, new_a,new_b;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		int new_a = a, new_b = b;
			while (new_a != new_b) 
			{
				if (new_a < new_b)
					new_a = new_a + a;
				else
					new_b = new_b + b;
			}
		cout << new_a << endl;
	}
	return 0;
}