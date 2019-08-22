//minimum number of rooms required
//given [(30, 75), (0, 50), (60, 150)], you should return 2.
/*
0	30	60
50	75	150
```````````
1	2	3
8	7	6
*/
#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

struct pairs 
{
	int start;
	int end;
	int status;
};

void swap (struct pairs *time1, struct pairs *time2)
{
	int tmp1 = time1 -> start;
	time1 -> start = time2 -> start;
	time2 -> start = tmp1;
	int tmp2 = time1 -> end;
	time1 -> end = time2 -> end;
	time2 -> end = tmp2;
}

int main()	{
	int n;
	cin >> n;
	int max = INT_MIN;
	int end_max = INT_MIN;
	struct pairs times[n];
	int tmp1, tmp2;
	for (int i = 0; i < n; i++)	{
		cin >> tmp1;
		times[i].start = tmp1;
		cin >> tmp2;
		times[i].end = tmp2;
		times[i].status = 0;
	}
	for (int i = 0; i < n-1; i++)	{
		if (times[i].end > end_max)
			end_max = times[i].end;
		for (int j = 0; j < n-i-1; j++)	{
			if (times[j].start > times[j+1].start)	
				swap(&times[j], &times[j+1]);
		}
	}
	int count;
	for (int i = times[0].start; i < end_max; i++)	{
		for (int j = 0; j < n; j++)	{
			if (i >= times[j].start && i < times[j].end)
				times[j].status = 1;
			else if (i > times[j].end || i < times[j].start)
				times[j].status = 0;
		}
		int sum = 0;
		for (int k = 0; k < n; k++)	{
				sum += times[k].status;

			}
			//cout << sum << endl;
		if (max < sum)
			max = sum;
	}
	//cout << max << endl;
	return max;
}