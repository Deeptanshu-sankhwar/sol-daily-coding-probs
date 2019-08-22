#include<iostream>
#include<cstring>
using namespace std;

void dictionary(string set[], int n, string str)
{
	int len = str.length();
	for(int i=0;i<n;i++)	{
		if(set[i].substr(0,len)==str)
			cout<<set[i]<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	string set[n];
	string temp;
	for(int i=0;i<n;i++)	{
		cin>> temp;
		set[i]=temp;
	}
	string str;
	cin>>str;
	dictionary(set, n, str);
}