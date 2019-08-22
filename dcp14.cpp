#include<iostream>
#include<random>
using namespace std;
int main()
{
	int x,y;
	int r;
	cin>>r;
	int n=1;
	float m=0;
	while(n<=1000)
	{
		//x rand
		x=rand() % (2*r)+1;
		x-=r;
		//cout<<x<<endl;
		//y rand
		y=rand() % (2*r)+1;
		y-=r;
		//cout<<y<<endl;
		if((x*x)+(y*y)<(r*r))
			m++;
		n++;
	}
	cout<<(4*m)/1000;
}