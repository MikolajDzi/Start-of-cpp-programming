#include<iostream>

using namespace std;

float meters; //global variable

float num_inches(float i) //float m formal argument not seen by main function
{
	float inches = i * 39.37; //local variable
	return inches;
}

float num_miles(float m) //float m formal argument not seen by main function
{
	float miles = m * 0.000621371192; //local variable
	return miles;
}

float num_yards(float j) //float m formal argument not seen by main function
{
	float yards = j * 1.0936133; //local variable
	return yards;
}

void nume_miles(float mi)
{
	cout<< "In miles: "<< mi* 0.000621371192;
}

int main() {
	cout << "How many meters you want to convert?";
	cin >> meters;

	cout << "In inches: " << num_inches(meters) << endl; // actual parameter/argument
	cout << "In miles: " << num_miles(meters) << endl;
	cout << "In yards: " << num_yards(meters) << endl;
	nume_miles(meters);

	return 0;
}