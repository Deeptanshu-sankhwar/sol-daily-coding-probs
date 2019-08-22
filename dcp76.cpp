#include <iostream>

using namespace std;

int main()	{
	int n,m;
	cin >> n >> m;
	char ar[n][m];
	int temp = 0;
	int count = 0;
	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < m ; j++)	{
			cin >> ar[i][j];
		}
	}

	for (int j = 0; j < m; j++)	{
		for (int i = 0; i < n; i++)	{
			if (i == 0)
				temp = ar[i][j];
			else if (ar[i][j] > temp)	{
				temp = ar[i][j];
			}
			else	{
				count++;
				break;
			}
		}
	}
	cout << count << endl;
}