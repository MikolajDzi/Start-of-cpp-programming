//1 Symulator bankomatu
//2 Logowanie do programu
//3 Wybory prezydenckie (sprawdzanie wieku)

#include <iostream>

using namespace std;

//1
/*string PIN; 
string correct_PIN = "1729";


int main() {
	cout << "Witaj w naszym banku." << endl;
	cout << "Podaj poprawny PIN: ";
	cin >> PIN;
	if (PIN == correct_PIN)
	{
		cout << "Podaj kwote jaka chcesz wyp³acic: ";
	}
	else {
		cout << "Niepoprawny PIN.";
	}


	return 0;
}*/ 
//2
/*string login, haslo;

int main()
{
	cout << "Podaj login: ";
	cin >> login;
	cout << "Podaj haslo uzytkownika " << login << ":";
	cin >> haslo;

	if (login == "admin" && haslo == "szarlotka")
	{
		cout << "Udalo sie poprawnie zalogowac.";
	}
	
	else
	{
		cout << "Bledny login lub haslo!";
	}

	return 0;
}*/
//3
int wiek;

int main() {
	cout << "Ile masz lat? ";
	cin >> wiek;
	if (wiek <18)
	{
		cout << "Jestes niepelnoletni i nie mozesz zostac prezydentem." << endl;
	}
	else if (wiek<35 && wiek>=18)
	{
		cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem";
	}
	else
	{
		cout << "Jestes pelnoletni i mozesz zostac prezydentem";
	}
	return 0;
}