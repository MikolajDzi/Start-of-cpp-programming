#include<iostream>
#include<vector>
using namespace std;
int a;
int main() 
{
	vector<int> n;
	while (cin>>a)
	{
		n.push_back(a);
	}
	for (int i = n.size(); i>0; i--)
	{
		cout << n[i]<< ' ';
	}
	return 0;
}
