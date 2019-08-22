//making power set
#include<iostream>
#include<math.h>
using namespace std;
int main()	{
	int n;
	cin >> n;
	int ar[n];
	for ( int i = 0; i < n; i++)	{
		cin >> ar[i];
	}
	int p_size = pow(2,n);
	for (int i = 0; i < p_size; i++)	{
		for( int j=0; j < n; j++)
		{
			if (i & (1<<j))
				cout << ar[j];
		}
		cout << endl;
	}

}
