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


int n,test;



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
					i = n + 1;
				}
			}
		}
	}
	return 0;
}