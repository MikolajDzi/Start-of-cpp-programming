#include<iostream>
using namespace std;
 
int main()
{
    int n;
    int k;
    cin >> n >> k;
  if (k<=n)
    {
        int* tab = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> tab[i];
        }

        for (int i = k; i < n; i++)
        {
            cout << tab[i];
            cout << " ";
        }
        for (int i = 0; i < k; i++)
        {
            cout << tab[i];
            if (i + 1 < k)
                cout << " ";
        }

        delete[] tab;

    }

    return 0;
}