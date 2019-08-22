#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main()	{
	int n;
	cin >> n;
	pair <int,int> pairs[n];
	for (int i = 0; i < n; i++)	{
		cin >> pairs[i].first;
		cin >> pairs[i].second;
	}
	sort(pairs, pairs + n);

	bool flag = true, lock = false;
	while(flag)	{
		for (int i = 0; i < n-1; )	{
			if (pairs[i+1].first < pairs[i].second)	{
				if (pairs[i+1].second < pairs[i].second)	{
					pairs[i+1] = pairs[i];
					lock = true;

				}
				else if(pairs[i+1].second > pairs[i].second)	{
					pairs[i+1].first = pairs[i].first;
					pairs[i].second = pairs[i+1].second;
					lock = true;
				}
			}
			i++;
		}
		if (lock == false)
			flag = false;
		lock = false;
	}

	cout << pairs[0].first << " ";
	cout << pairs[0].second << endl;
	for (int i = 1; i < n; i++)	{
		if (pairs[i] != pairs[i-1])	{
			cout << pairs[i].first << " ";
			cout << pairs[i].second << endl;
		}
	}
}