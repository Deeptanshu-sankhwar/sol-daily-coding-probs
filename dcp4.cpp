//dcp4
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()	{
	int n;
	cin >> n;
	int min = INT_MAX;
	int dest = 0, tmp = 0;
	int ar[n];
	for ( int i = 0; i < n ; i++)	{
		cin >> ar[i];
		if (ar[i] > 0)
			dest++;
		if (ar[i] < min && ar[i] > 0)
			min = ar[i];
	}
	for ( int i = 0; i < n; i++)	{
		ar[i] = ar[i] - min + 1;
		if (ar[i] > 0)
			tmp += ar[i];

	}
	cout << min + ((dest+1)*(dest+2)/2) - tmp - 1; 

}

// -1 34 35 32
// -1 3  4   1