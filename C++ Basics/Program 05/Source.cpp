//Types of variables
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int A; //integer f.ex. -1,0,1,2,3..1000,1000 etc.
	float B; //floating point f.ex. 0.0, 1.5 1.6666, 3.1415, 223.27, etc.
	double C; //double precision floating point f.ex. 0.0, 1.5 1.6666, 3.1415, 223.27, etc.
	char D; //character f.ex a,b,c,@,# etc.
	string E; //word, sentence etc.
	short number; //short number
	//cout << number;
	char characters[] = "This is from C language";
	cout << sizeof(short)<<endl;
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(string) << endl;
	cout << characters << endl;


	return 0;
}