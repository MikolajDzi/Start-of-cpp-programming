#include <iostream>
#include <windows.h>
#include <list>
using namespace std;

//1.Stack

/*int dane[6];
int rozmiar;

-----------------------------

void wyswietl_stos()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    cout << endl;
    cout << "----------------" << endl;
    cout << "ZAWARTOSC STOSU:" << endl;
    cout << "----------------" << endl;

    for (int i = rozmiar; i >= 1; i--)
    {
        cout << dane[i] << endl;
    }

    if (rozmiar == 0) cout << "pusty" << endl;

    cout << "----------------" << endl << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

-----------------------------

void push()
{
    if (rozmiar >= 5)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout << endl << "PUSH (jaka liczbe polozyc na stosie): ";
        rozmiar++;
        cin >> dane[rozmiar];
    }
}

-----------------------------

void pop()
{
    if (rozmiar >= 1)
    {
        cout << endl << "POP - nastapi usuniecie ze stosu liczby: " << dane[rozmiar];
        Sleep(2000);
        rozmiar--;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}
-----------------------------

void size()
{
    cout << endl << "Liczba elementow na stosie: " << rozmiar;
    Sleep(2000);
}

-----------------------------

void empty()
{

    if (rozmiar == 0) cout << endl << "EMPTY (stos pusty?) ->  TRUE";
    else cout << endl << "EMPTY (stos pusty?) ->  FALSE";
    Sleep(2000);
}

-----------------------------


int main()
{

    int wybor;
    rozmiar = 0;

    do
    {
        wyswietl_stos();

        cout << "MENU GLOWNE STOSU:" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. PUSH (dodaje element na szczyt stosu) " << endl;
        cout << "2. POP (usuwa element ze szczytu stosu) " << endl;
        cout << "3. SIZE (ile elementow na stosie) " << endl;
        cout << "4. EMPTY (czy stos jest pusty?) " << endl;
        cout << "5. Koniec programu " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;

        }

    } while (wybor != 5);

    return 0;
}*/

//2. Queue

/*int dane[5];
int ile;
int glowa;
int ogon;

//-------------------------------

void wyswietl_kolejke()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    cout << endl;
    cout << "-------------------" << endl;
    cout << "ZAWARTOSC KOLEJKI: " << endl;
    cout << "-------------------" << endl;


    if (ile == 0)
    {
        cout << "pusta";
    }

    else
    {

        int indeks;

        for (int i = 0; i < ile; i++)
        {
            indeks = glowa + i;
            if (glowa + i >= 5) indeks = glowa + i - 5;
            cout << dane[indeks] << " ";
        }

    }

    cout << endl << "-------------------" << endl << endl;


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

//-------------------------------

void push()
{
    if (ile >= 5)
    {
        cout << "Kolejka pelna!";
        Sleep(1000);
    }
    else if (ile == 0)
    {
        cout << endl << "PUSH (jaka liczbe wstawic do kolejki): ";
        cin >> dane[ogon];
        ogon++;
        ile++;

    }
    else
    {
        cout << endl << "PUSH (jaka liczbe wstawic do kolejki): ";
        cin >> dane[ogon];
        ogon = (ogon + 1) % 5;
        ile++;
    }
}

//-------------------------------

void pop()
{
    if (ile == 0)
    {
        cout << "Kolejka jest pusta!";
        Sleep(2000);
    }
    else
    {
        cout << endl << "POP - nastapi usuniecie z kolejki liczby: " << dane[glowa];
        glowa = (glowa + 1) % 5;
        ile--;
        Sleep(2000);

    }


}
//-------------------------------

void size()
{
    cout << endl << "Liczba elementow w kolejce: " << ile;
    Sleep(2000);
}

//-------------------------------

void empty()
{

    if (ile == 0) cout << endl << "EMPTY (kolejka pusta?) ->  TRUE";
    else cout << endl << "EMPTY (kolejka pusta?) ->  FALSE";
    Sleep(2000);
}

//-------------------------------

int main()
{

    int wybor;
    ile = 0;
    glowa = 0;
    ogon = 0;

    do
    {

        wyswietl_kolejke();

        cout << "MENU GLOWNE KOLEJKI:" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. PUSH (dodaje element na koniec kolejki) " << endl;
        cout << "2. POP (usuwa element z poczatku kolejki) " << endl;
        cout << "3. SIZE (ile elementow w kolejce) " << endl;
        cout << "4. EMPTY (czy kolejka jest pusta?) " << endl;
        cout << "5. Koniec programu " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;
        }

    } while (wybor != 5);

    return 0;
}*/

//List

list <int> lista; //utworzenie listy przechowujacej liczby calkowite
int wybor;

//---------------------

void wyswietl()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout << " ZAWARTOSC LISTY: " << endl;
    cout << "---------------------------" << endl;

    for (list<int>::iterator i = lista.begin(); i != lista.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "---------------------------" << endl << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

//-------- 1 ------------

void push_front()
{
    int liczba;
    cout << "Podaj jaka liczbe wstawic na pocz\245tek listy: ";
    cin >> liczba;
    lista.push_front(liczba);
}

//--------- 2 -----------

void push_back()
{
    int liczba;
    cout << "Podaj jaka liczbe wstawic na koniec listy: ";
    cin >> liczba;
    lista.push_back(liczba);
}

//---------- 3 ---------

void pop_front()
{
    cout << "Nast\245pi usuni\251cie liczby z pocz\245tku listy";
    Sleep(2000);
    lista.pop_front();
}

//---------- 4 ---------

void pop_back()
{
    cout << "Nast\245pi usuni\251cie liczby z konca listy";
    Sleep(2000);
    lista.pop_back();
}

//---------- 5 ----------

void size()
{
    cout << "Liczb na li\230cie: " << lista.size();
    Sleep(2000);
}

//---------- 6 ----------

void max_size()
{
    cout << "Max liczb na li\230cie: " << lista.max_size();
    Sleep(5000);
}

//---------- 7 ----------

void empty()
{
    cout << "Czy lista pusta? -> ";
    if (lista.empty() == 1) cout << "TRUE"; else cout << "FALSE";
    Sleep(2000);
}

//---------- 8 ----------

void remove()
{
    int liczba;
    cout << "Usun z listy wszystkie liczby rowne: ";
    cin >> liczba;
    lista.remove(liczba);
}

//---------- 9 ----------

void sort()
{
    cout << "Nastapi posortowanie listy! ";
    lista.sort();
    Sleep(2000);
}

//---------- 10 ----------

void reverse()
{
    cout << "Nastapi odwrocenie kolejnosci liczb!";
    lista.reverse();
    Sleep(2000);
}

//---------- 11 ----------

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout << "Koniec programu!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}
//------------------------

int main()
{

    do
    {

        wyswietl();

        cout << " MENU GLOWNE LISTY:" << endl;
        cout << "---------------------------" << endl;
        cout << "1.  push_front" << endl;
        cout << "2.  push_back" << endl;
        cout << "3.  pop_front" << endl;
        cout << "4.  pop_back" << endl;
        cout << "5.  size" << endl;
        cout << "6.  max_size" << endl;
        cout << "7.  empty" << endl;
        cout << "8.  remove" << endl;
        cout << "9.  sort" << endl;
        cout << "10. reverse" << endl;
        cout << "11. exit" << endl;
        cout << "---------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:  push_front(); break;
        case 2:  push_back();  break;
        case 3:  pop_front();  break;
        case 4:  pop_back();   break;
        case 5:  size();       break;
        case 6:  max_size();   break;
        case 7:  empty();      break;
        case 8:  remove();     break;
        case 9:  sort();       break;
        case 10: reverse();    break;
        case 11: exit();       break;

        default:
            cout << "POMYLKA!";
            Sleep(2000);
            break;
        }

    } while (wybor != 11);

    return 0;
}

