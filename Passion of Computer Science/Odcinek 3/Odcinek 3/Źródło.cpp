#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
int repeats;
string word;
int bacteria = 1;
int hours =0;

int main()
//przyk³ad petli for z inkrementacja
/*{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
	return 0;
}*/

//przyk³ad pêtli for z dekrementacj¹
/*{
	for (int i=4; i>=-1; i--)
	{
		cout << i << endl;
	}
	return 0;
}*/

//petla for nieskonczona
/*{
	for (int i = -13; i < 0; i = i - 10000)

	{
		cout << i << endl;
	}
	return 0;
}*/
//program odlicza 15 sek. (petla for)
/*{
	for (int i = 15; i >= 0; i--)
	{
		Sleep(1000);
		system("cls");
		cout << i << endl;
	}
	cout << "BOOM";
	return 0;
}*/

//wypisuje slowo tyle razy ile poprosimy (petla for)
/*{
	cout << "Podaj slowo: ";
	cin >> word;
	cout << "Podaj ile razy ma sie powtorzyc: ";
	cin >> repeats;

	for (int i = 1; i <= repeats; i++)
	{
		cout << i << ". " << word << endl;

	}
	return 0;
}*/

//program oblicza nam potegi liczby 2 (while)
/*{
	while (bacteria<=1000000000)
	{
		hours++;
		bacteria = bacteria * 2;
		cout << "Passed time: " << hours << endl << "Bacterias population: " << bacteria << endl;
	}

	return 0;
}*/

//program oblicza nam potegi liczby 2 (do while)
{
	do
	{
		hours++;
		bacteria = bacteria * 2;
		cout << "Passed time: " << hours << endl << "Bacterias population: " << bacteria << endl;
	} while (bacteria <= 1000000000);

	return 0;
}