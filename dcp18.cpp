//in O(n) time
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max = INT_MIN;
	int max2 = INT_MIN;
	int first = 0, second = 0;
	int n;
	cin >> n;
	int ar[n];
	bool flag = 0;
	for(int i = 0; i < n; i++)
		cin >> ar[i];
	int k;
	cin >> k;
	int max_ar[n-k+1];
	int a = 0;
	for(int i = 0; i < n; i++)	{
		if(ar[i] > max)	{
			max = ar[i];
			first = i;
		}
		if(max2 < ar[i] && ar[i] < max)	{
			max2 = ar[i];
			second = i;
		}
		if(flag == 1)	{
			max_ar[a++] = max;
			if(i-k+1 == first)	{
				max = max2;
				first = second;
				max2 = INT_MIN;
			}
		}
		if((i+1)%k == 0 && flag == 0)	{
			max_ar[a++] = max;
			if(i-k+1 == first)	{
				max = max2;
				first = second;
				max2 = INT_MIN;
			}
			flag=1;
		}

	}
	for(int i = 0; i < n-k+1; i++)
		cout << max_ar[i] << endl;
}