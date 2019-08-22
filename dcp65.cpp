#include <iostream>

using namespace std;

void clockwise (int n, int m, int ar[4][5])	{
	for (int j = m; j < 5-m; j++)	{
		cout << ar[n][j] << endl;
	}
	for (int j = n+1; j < 4-n; j++)	{
		cout << ar[j][5-m-1] << endl;
	}
	for (int j = 5-m-2; j >= m; j--)	{
		cout << ar[4-n-1][j] << endl;
	}
	for (int j = 4-n-2; j > n; j--)	{
		cout << ar[j][m] << endl;
	}
	if(n == 1)
		return;
	clockwise(n+1,m+1,ar);
	return;

}

int main ()	{
	int ar[4][5] = 	{{1,  2,  3,  4,  5},
				 	{6,  7,  8,  9,  10},
				 	{11, 12, 13, 14, 15},
				 	{16, 17, 18, 19, 20}};
	clockwise(0, 0, ar);
}