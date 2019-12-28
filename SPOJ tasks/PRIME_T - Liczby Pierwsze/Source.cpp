#include<iostream>
using namespace std;
int a,n,x; 

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
        x = 2;
        if (a < 2)
        {
            cout << "NIE" << endl;
        }
        else {
            while (a % x != 0)
            {
                x=x+1;
            }
            if (x == a) 
            {
                cout << "TAK" << endl;
            }
            else 
            {
                cout << "NIE" << endl;
            }
        }
	}
	return 0;
}