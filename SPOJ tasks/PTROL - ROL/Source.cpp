#include<iostream>
using namespace std;
int t, n;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int* array;
		array = new int[n];
		cin >> array[n - 1];
		for (int j = 0; j < n - 1; j++)
		{
			cin >> array[j];
		}
		for (int j = 0; j < n; j++)
		{
			cout << array[j]<<' ';
		}
		cout << endl;
	}
	return 0;
}