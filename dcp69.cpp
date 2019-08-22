//largest-3-product-facebook
#include <iostream>
#include <limits.h>
#include <cstdlib>
using namespace std;

int nextNegative(int ar[], int n, int max)	{
	int throwNeg = INT_MAX;
	for (int i = 0; i < n;i++)	{
		if (ar[i] < throwNeg && ar[i] > -1*max)
			throwNeg = ar[i]; 
	}	
	return -1*throwNeg;
}

int nextPositive(int ar[], int n, int max, int max2)	{
	int throwPos = INT_MIN;
	for (int i = 0; i < n; i++)	{
		if (ar[i] > throwPos && (ar[i] != max && ar[i] != max2))
			throwPos = ar[i];
	}
	return throwPos;
}

int main()	{
	int max = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, maxPositive = 0;
	int ind = 0, ind2 = 0, ind3 = 0;
	int n;
	cin >> n;
	int ar[n];
	int negCount = 0;
	for (int i=0; i< n;i++)	{	
		cin >> ar[i];
		if (ar[i] > maxPositive)
			maxPositive = ar[i];
		if (abs(ar[i]) > max)	{
			max = abs(ar[i]);
			ind = i;
		}
		else if (abs(ar[i]) > max2 && abs(ar[i]) <= max)	{
			max2 = abs(ar[i]);
			ind2 = i;
		}
		else if (abs(ar[i]) > max3 && (abs(ar[i]) <= max2 && abs(ar[i]) <= max))	{
			max3 = abs(ar[i]);
			ind3 = i;
		}
	}
	if (ar[ind] < 0)
		negCount++;
	if (ar[ind2] < 0)
		negCount++;
	if (ar[ind3] < 0)
		negCount++;
	switch(negCount)	{
		case 0:
			cout <<  max * max2 * max3;
			break;
		case 1:
			if (ar[ind] < 0)	{
				cout << nextNegative(ar,n,max) * max * max3;
			}
			else if (ar[ind2] < 0)
				cout << nextPositive(ar,n,max, max3) * max * max3;
			else
				cout << nextPositive(ar,n,max,max2) * max * max2;
			break;
		case 2:
			cout << max * max2 * max3;
			break;
		case 3:
			cout << max * max2 * maxPositive;
			break;
	}


}