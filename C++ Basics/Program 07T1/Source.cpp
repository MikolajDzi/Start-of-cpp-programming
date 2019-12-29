//First task, printing name, surname and age
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name = "Mikolaj ";
	string surname = "Dziubinski";
	string person;
	int age = 20;

	cout << name << endl;
	cout << surname << endl;
	cout << age << endl;
	person = name + surname;
	cout << person << endl;

	return 0;
}