#include<iostream>
#include<iomanip>
using namespace std;

//finding max value


const int N=5;
float arr[N];

/*signed int a, b, c;
int counter = 0;
float arr[5];

/*int maximal(int a, int b, int c)
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
	cout << "Please insert numbers: ";
	
	cout << "Please insert 3 numbers (with space after each): ";
	cin >> a;
	counter++;
	cin >> b;
	counter++;
	cin >> c;
	counter++;

	if (a >= b && a >= c)
		cout << "Max value is a:" << a;
	else if (b >= a && b >= c)
		cout << "Max value is b: " << b;
	else if (c >= b && c >= c)
		cout << "Max value is c: " << c;

	cout << "Highest value is: " << maximal(a, b, c);

	return 0;
}*/

float nearest_to_average(float* array,int lenght)
{
	float sum, average;
	float dbaav[N]; //difference betwen average and values


	for (int i = 0; i < 5; i++)
	{
		sum += array[i];
	}
	average = sum / 5;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > average)
		{
			dbaav[i] = array[i] - average;
		}
		else
		{
			dbaav[i] = average - array[i];
		}
	}


	
}


int main()
{
	
	
	cout << "Insert 5 numbers: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << setw(4);
	}


	return 0;
}

