#include<iostream>
#include<string>

using namespace std;

int main() {

	string name;
	cout << "Please tell me your name: ";
	cin >> name;


	int name_lenght=name.length();
	//cout << name_lenght;
	//cout << endl;

	if (name[name_lenght - 1] == 'a')
	{
		cout << "You are probably a woman.";
	}
	else
	{
		cout << "You are probably a man";
	}
	return 0;
}