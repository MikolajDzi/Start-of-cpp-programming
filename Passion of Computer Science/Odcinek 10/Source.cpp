#include<iostream>

using namespace std;

int main() {
	int number = 144;
	int* w;
	w = &number;
	cout << w << '\n' << *w;


	return 0;
}