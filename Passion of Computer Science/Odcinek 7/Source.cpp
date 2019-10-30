/*#include<iostream>
#include<iomanip>
#include<fstream>
#include<istream>
#include<string>
#include<cstdlib>
using namespace std;

string name, surname;
int phone_number;

int main()
{
	//saving in file
	/*
	cout << "Please tell me your name: ";
	cin >> name;
	cout << "Please tell me your surname: ";
	cin >> surname;
	cout << "Please tell me your phone number: ";
	cin >> phone_number;

	fstream file;

	file.open("flyer.txt",ios::out | ios::app);

	file << name << endl;
	file << surname << endl;
	file << phone_number << endl;

	file.close();*/

/*fstream file;

	file.open("flyer.txt", ios::in | ios::app);

	if (file.good() == false)
	{
		cout << "Something wrong with the file!";
		exit(0);
	}

	string line;
	int line_numbr = 1;

	while (getline(file, line))
	{	
		switch (line_numbr)
		{
		case 1: name = line; break;
		case 2: surname = line; break;
		case 3: phone_number = atoi(line.c_str()); break;
		
		}
		line_numbr++;
	}

	file << name << endl;
	file << surname << endl;
	file << phone_number << endl;

	file.close();

	cout << name << endl;
	cout << surname << endl;
	cout << phone_number << endl;

	return 0;
}*/

#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<fstream>
#include<istream>

using namespace std;

string topic, nick;
string content[5];
string ansA[5], ansB[5], ansC[5], ansD[5];
string correct[5];


int main()
{
	int line_num = 1;
	string line;

	fstream file;
	file.open("quiz.txt", ios::in);
	
	if (file.good() == false)
		{
		cout << "Something wrong with the file!";
		exit(0);
		}

	while (getline(file, line))
	{
		switch (line_num)
		{
		case 1: topic		= line;			break;
		case 2: nick		= line;			break;
		case 3: content[0]	= line;			break;
		case 4: ansA[0]		= line;			break;
		case 5: ansB[0]		= line;			break;
		case 6: ansC[0]		= line;			break;
		case 7: ansD[0]		= line;			break;
		case 8: correct[0]	= line;			break;
		}
		line_num++;
	}


}