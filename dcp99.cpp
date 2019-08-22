//microsoft  -- O(n)
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()	{
	int m;	cin >> m;
	int ar[m];
	unordered_set<int> hash;
	for (int i = 0; i < m ; i++)	{
		cin >> ar[i];
		hash.insert(ar[i]);
	}
	int max = 0;
	for (int i = 0; i < m; i++)	{
		if (hash.find(ar[i]-1) == hash.end())	{
			int temp = ar[i];
			while(hash.find(temp) != hash.end())
				temp++;
			temp -= ar[i];
			if (max < temp)
				max = temp;
		}
	}
	cout << max << endl;
}