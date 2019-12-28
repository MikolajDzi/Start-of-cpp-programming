#include<iostream>
using namespace std;
int t, n;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int* array;
		cin >> n;
		array = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> array[j];
		}
		for (int j = n - 1; j >= 0; j--)
		{
			cout << array[j] << ' ';
		}
		cout << endl;
		delete[] array;
	}
	return 0;
}