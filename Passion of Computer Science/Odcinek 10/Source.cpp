#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int how_many;

clock_t start, stop;
double time_wop;

float average(float* arr, int how)
{
	float sum = 0;
	for (int i = 0; i < how; i++)
	{
		sum +=*arr;
	
		arr++;
	}
	return sum / how;
}

int main() {
	//pointers basics
	/*int number = 144;
	int* w;
	w = &number;
	cout << w << '\n' << *w;*/

	/*cout << "How many numbers in the array: ";
	cin >> how_many;

	int* arr;
	arr = new int[how_many];

	for (int i = 0; i < how_many; i++)
	{
		cout <<(int)arr << endl;
		arr++;
	}



	delete [] arr;*/ //not working on 64bit system
	
	//without pointers
	/*cout << "How many numbers you want to have in array? ";
	cin >> how_many;
	int* array;
	array = new int[how_many];
	start = clock();
	for (int i = 0; i < how_many; i++)
	{
		array[i] = i;
		array[i] += 50;
	}
	stop = clock();
	time_wop = ((double)stop - (double)start) / CLOCKS_PER_SEC;
	
	cout << "Time of the write(without pointer): " << time_wop << endl;

	delete[] array;*/

	//with pointers
	/*array = new int[how_many];
	int* pointer = array;
	
	start = clock();
	for (int i = 0; i < how_many; i++)
	{
		*pointer = i;
		*pointer += 50;
		pointer++;
	}
	stop = clock();
	time_wop = ((double)stop - (double)start) / CLOCKS_PER_SEC;

	cout << "Time of the write(with pointer): " << time_wop << endl;

	delete[] array;*/

	float array[3];
	array[0] = 1.5;
	array[1] = 2.3;
	array[2] = 0.75; 

	cout << "Average is equal to: " << average(array, 3);
	
 	return 0;
}