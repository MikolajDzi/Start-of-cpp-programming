#include<iostream>
#include<time.h>
#include<windows.h>
#include<cstdlib>
#include<iomanip>
using namespace std;
int N;
clock_t start_b, stop_b, start_c, stop_c;
double timer_b, timer_c;
void bubble_sort(int* array, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (array[j] > array[j + 1])
				swap(array[j], array[j + 1]);
		}
	}
}

void quick_sort(int* array, int left, int right)
{
	int v = array[(left + right) / 2];
	int i, j, x;
	i = left;
	j = right;
		do
		{
			while (array[i] < v) i++;
			while (array[j] > v) j--;
			if (i <= v)
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
				i++;
				j--;
			}
		} while (i <= j);
		if (j > left)	quick_sort(array, left, j);
		if (i < right)	quick_sort(array, i, right);
}


int main()
{
	cout << "How many elements in an array? ";
	cin >> N;
	int* arr_bubble;
	arr_bubble = new int [N];
	int* arr_quick;
	arr_quick = new int [N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr_bubble[i] = rand()%100000+1;
	}
	for (int i = 0; i < N; i++)
	{
		arr_quick[i] = arr_bubble[i];
	}
	//cout << "Before sort: " << endl;
	/*for (int i = 0; i < N; i++)
	{
		cout << arr_bubble[i] << "\n";
	}*/
	start_b = clock();
	bubble_sort(arr_bubble, N);
	stop_b = clock();
	timer_b = ((double)stop_b - (double)start_b) / CLOCKS_PER_SEC;
	//cout << "After bubble sort: " << endl;
	/*for (int i = 0; i < N; i++)
	{
		cout << arr_bubble[i] << "\n";
	}*/
	start_c = clock();
	quick_sort(arr_quick, 0, N-1);
	stop_c = clock();
	timer_c = ((double)stop_c - (double)start_c) / CLOCKS_PER_SEC;
	//cout << "After quick sort: " << endl;
	/*for (int i = 0; i < N; i++)
	{
		cout << arr_quick[i] << "\n";
	}*/
	cout << endl;
	cout << "It took " << timer_b << "s to bubble sort this array." << "\n";
	cout << "It took " << timer_c << "s to quick sort this array.";
	delete[] arr_bubble;
	delete[] arr_quick;
	return 0;
}