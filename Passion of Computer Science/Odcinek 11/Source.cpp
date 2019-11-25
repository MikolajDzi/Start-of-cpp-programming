#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

//finding max value

vector<float>nearest;
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

void nearest_to_average(float* array,const int lenght)
{
	float sum = 0;
	float average, min=0;
	int c=0;
	float dbaav[N];
	dbaav[0] = 0;//difference betwen average and values
	min = dbaav[0];
	//float nearest[N];
	

	for (int i = 0; i < lenght; i++)
	{
		sum += array[i];
	}
	average = sum / lenght;
	cout << "Average is equal to: "<< average << endl;

	for (int i = 0; i < lenght; i++)
	{
		if (array[i] > average)
			dbaav[i] = array[i] - average;
		else
			dbaav[i] = average - array[i];
	}
	
	cout << "Lenghts to average: ";
	for (int i = 0; i < lenght; i++)
	{
		cout << dbaav[i] << setw(10);
	}
	cout << endl;
	min = dbaav[0];
	for (int i = 0; i < lenght; i++)
	{
		if (min > dbaav[i])
			min = dbaav[i];	
	}
	
	for (int i = 0; i < lenght; i++)
	{
		if (min == dbaav[i])
			nearest.push_back(array[i]);
	
	}
	
	
}


int main()
{
	
	
	cout << "Insert 5 numbers: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	nearest_to_average(arr,N);
	cout << setw(0) << "Nearest to average are: ";

	for (int i = 0; i < nearest.size(); i++) {
		cout << nearest[i] << setw(4);
	}
	

	return 0;
}

