//Exercise is about giving sweets to students, we have to give as much sweets as we can but we can't give anyone more or less.
//The rest of the sweet are for the person who is giving them out. (Passion of programming part 1 ex. 1)

#include <iostream>;

using namespace std;

int students, sweets, a, b;


int main() 
{
	cout << "How many students are in a class? ";
	cin >> students;
	cout << "How many sweets have been bought? ";
	cin >> sweets;
	a = sweets / (students - 1);
	cout << "Every student will get " << a << " sweets." << endl;
	b = sweets - a * (students - 1);
	cout << "There will be  " << b << " sweets left.";


	return 0;
}