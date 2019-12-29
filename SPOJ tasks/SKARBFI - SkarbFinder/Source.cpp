#include<iostream>
using namespace std;
int test, hints, direction, distance, dist_0,dist_1,dist_2,dist_3;
int* arr_dir;
int* arr_dist;
int main()
{
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> hints;
		arr_dir = new int[hints];
		arr_dist = new int[hints];
		for (int j = 0; j < hints; j++)
		{
			cin >> arr_dir[j] >> arr_dist[j];
		}
		
	}
	return 0;
}