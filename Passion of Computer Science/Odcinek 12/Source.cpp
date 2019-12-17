#include<iostream>

using namespace std;

/*int a, b;
int main()
{
	cin >> a >> b;
	cout << a + b;
	return 0;
}*/

//average speed 

/*int v1, v2, test;

int main() 
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> v1 >> v2;
		cout << 2 * v1 * v2/ (v1 + v2)<<endl;
	}
	return 0;
}*/

//first numbers


/*int n,test;



int main()
{
	cin >> test;

	for (int j = 0; j < test; j++) {
		cin >> n;
		
		if (n < 2)
			cout<<"NIE"<<endl;
		else {
			for (int i = 2; i * i <= n; i++)
			{
				if (n % i == 0) {
					cout << "NIE" << endl;
				}
				else
				{
					cout << "TAK" << endl;

				}
			}
		}
	}
	return 0;
}*/

/*int a,b,square, temp, test;

int main()
{
	cin >> test;
	for (int j = 0; j < test; j++)
	{
		cin >> a >> b;
		square = pow(a, b);
		if(square>1)
		temp=square/100;
		square -= temp;
		temp=square/10
	}
}*/

//quadratic eqution

double a, b, c;
int main()
{
cin >> a >> b >> c;
double delta = (b * b) - (4 * a * c);
	if (delta < 0)
	{
		cout << 0 << endl;
	}
	else if (delta == 0)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
return 0;
}

//strange addition

/*int a,sum, test, numbs;
int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> numbs;
		for (int j = 0; j < numbs; j++)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}*/
