//staircase problem
#include<iostream>
using namespace std;
int fact(int dig)
{
	if(dig==0)
		return 1;
	else	{
	int f=1;
	for(int i=1;i<=dig;i++)
		f*=i;
	return f;
}
}

int main()
{
	int n;
	cin>>n;
	int x,y;
	int tot=0;
	for(x=0;x<=n;x++)
	{
		if((n-x)%2==0)	{
			y=(n-x)/2;
			tot+=fact(x+y)/(fact(x)*fact(y));
		}
	}
	cout<<tot<<endl;
}