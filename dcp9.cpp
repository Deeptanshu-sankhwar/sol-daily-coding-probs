#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct check {
	int val;
	bool pos;
};

int bitch(struct check ar[], int n)
{
	int k=0;
	int sum=0;
	int j;
	if(n%2==0)
		j = n/2;
	else
		j = n/2+1;
	while(j>0)
	{
		int max =  INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(ar[i].val>max&&ar[i].pos==0)	{
				max=ar[i].val;
				k=i;
			}
		}
		sum+=max;
		if(k==0)	{
			ar[k].pos=1;
			ar[k+1].pos=1;
		}
		else if(k==n-1)	{
			ar[k].pos=1;
			ar[k-1].pos=1;
		}
		else	{
			ar[k].pos=1;
			ar[k-1].pos=1;
			ar[k+1].pos=1;
		}
		j--;
	}
	return sum;
}

int main()
{
	int n;
	cin>>n;
	struct check ar[n];
	for(int i=0;i<n;i++)	{
		cin>>ar[i].val;
		ar[i].pos=0;
	}
	cout<<bitch(ar,n)<<endl;
}