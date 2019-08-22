#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int cost[n][k];
	int tot = 0;
	int dig = 0, dig2 = 0;
	int min = INT_MAX;
	for(int i = 0; i < n; i++)	{
		for(int j = 0; j < k; j++)	{
			cin >> cost[i][j];
		}
	}
	for(int i = 0; i < n; i++)	{
		for(int j = 0; j < k; j++)	{
			if(cost[i][j] < min && i == 0)	{
				min = cost[i][j];
				dig = j;
			}
			else if(cost[i][j] < min && j != dig)	{
				min = cost[i][j];
				dig2 = j;
			}
			dig = dig2;
		}
		tot += min;
		min = INT_MAX;
	}
	return tot;
}