#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>
using namespace std;

//absolute value abs function
/*int x=800, R, D,o1,o2;
int main() 
{
	cout << "How many milions did GTA 5 earned in the premiere day?" << endl;
	cout << "Ricks answer: ";
	cin >> R;
	cout << "Darryls answer: ";
	cin >> D;
	o1 = abs(x - D);
	o2 = abs(x - R);
	if (o1 < o2)
		cout << "Darryl won!";
	else if (o1 = o2)
		cout << "Draw!";
	else
		cout << "Rick won!";
	return 0;
}*/

//power pow function

/*int main()
{
	long long int x;
	x = pow(2, 32) - 1;
	unsigned int y= x;
	x / 2;
	cout << setprecision(20)<<x<<endl;
	cout <<"MAX int:" <<y;

	return 0;
}*/
//Square root sqrt function, cbrt cubic root 

/*float x_1, y_1, x_2, y_2, d;
int main()
{
	//sqrt square root, cbrt cubic root

	cout << cbrt(27) << "\n" << pow(27 , 1.0/3.0) << endl;



	cout << "Please insert first coordinates x and y: ";
	cin >> x_1 >> y_1;
	cout << "Please insert second coordinates x and y: ";
	cin >> x_2 >> y_2;
	d = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
	cout << "The distance between these points is equal to: " << d<<endl;

	
	return 0;
}*/

//rouding values

/*int main()
{
	int c;
	cin >> c;
	float* array = new float[c];
	for (int i = 0; i < c; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < c; i++)
	{
		cout << array[i] << ' ';
	}
	cout << "\n "<<"Round: " << endl;
	for (int i = 0; i < c; i++)
	{
		cout << round(array[i]) << ' ';
	}
	cout << "\n " << "Floor: " << endl;
	for (int i = 0; i < c; i++)
	{
		cout << floor(array[i]) << ' ';
	}
	cout << "\n " << "Ceil: " << endl;
	for (int i = 0; i < c; i++)
	{
		cout << ceil(array[i]) << ' ';
	}
	return 0;
}*/

//PI number

/*int main()
{


	cout << setprecision(49);
	cout << M_PI << endl;
	cout << M_E << endl;

	return 0;
}*/

//trygonometric functions in C++

/*int main()
{
	float angle;
	cin >> angle;
	//angle im degres to radians;
	angle = angle * M_PI / 180.0;
	cout << sin(angle)<<endl;
	cout << cos(angle) << endl;
	cout << tan(angle) << endl;
	if(tan(angle)!=0)
	{
		cout << 1 / tan(angle) << endl;
	}
	return 0;
}*/

//Task about buying ships, we have to check if user is able to purchase a ship or not, if yes how many
int t;
int main()
{
	cin >> t;
	for (int f = 0; f < t; f++)
	{
		float iron, crystal, deuter, min;
		float price_iron = 20000;
		float price_crystal = 7000;
		float price_deuter = 2000;
		int num_array[3];
		cout << "How much iron do you have: ";
		cin >> iron;
		cout << "How much crystal do you have: ";
		cin >> crystal;
		cout << "How much deuter do you have: ";
		cin >> deuter;
		if (iron && crystal && deuter > 0)
		{
			if (price_iron <= iron && price_crystal <= crystal && price_deuter <= deuter)
			{
				num_array[0] = trunc(iron / price_iron);
				num_array[1] = trunc(crystal / price_crystal);
				num_array[2] = trunc(deuter / price_deuter);
				min = num_array[0];
				for (int i = 0; i < 2; i++)
				{
					if (num_array[i] > num_array[i + 1])
						min = num_array[i + 1];
				}
				if (min == 1)
					cout << "You can buy one ship"<<endl;
				else

					cout << "You can buy " << min << " ships!"<<endl;
			}
			else
			{
				cout << "You do not have enough material to buy a ship!" << endl;
			}
		else
		{
			cout << "Wrong data!!!"<<endl;
		}
	}
	return 0;
}