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
	float sum = 0;
	float average, min;
	int c=0;
	float dbaav[N];
	dbaav[0] = 0;//difference betwen average and values
	min = 0;
	float nearest[N];
	

	for (int i = 0; i < lenght; i++)
	{
		sum += array[i];
	}
	average = sum / lenght;
	
	for (int i = 0; i < lenght; i++)
	{
		if (array[i] > average)
			dbaav[i] = array[i] - average;
		else
			dbaav[i] = average - array[i];
	}
	
	for (int i = 0; i < lenght; i++)
	{
		if (dbaav[i] < dbaav[i + 1])
			min = dbaav[i];
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

	nearest_to_average(arr,N);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << setw(4);
	}


	return 0;
}

