#include<iostream>
#include<string>
using namespace std;
struct alpha
{
	char car;
	int count;
	bool visit;
};

int main()
{
	char str[100];
	getline(cin, str);
	int n;
	cin>>n;
 	struct alpha ar[26];
 	for(int i=0;i<26;i++)	{
 		ar[i].car = char(97+i);
 		ar[i].count = 0;
 		ar[i].visit = 0;
 	}
 	for(int i=0;str[i]!='\0';i++)	{
 		
 	}

}