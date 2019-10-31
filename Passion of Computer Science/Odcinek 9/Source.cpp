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

float num_jards(float j) //float m formal argument not seen by main function
{
	float jards = j * 0.9144; //local variable
	return jards;
}

int main() {
	cout << "How many meters you want to convert?";
	cin >> meters;

	cout << "In inches: " << num_inches(meters) << endl; // actaul parameter/argument
	cout << "In miles: " << num_miles(meters) << endl;
	cout << "In jards: " << num_jards(meters) << endl;

	return 0;
}