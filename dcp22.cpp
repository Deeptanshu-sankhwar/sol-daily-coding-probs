#include<string.h>
#include<iostream>
using namespace std;

int main()	{
	string word[100];
	cout << "press e to exit"<<endl;
	int i = 0;
	string x;
	while(true)	{
		cin >> x;
		if (x != "e")
			word[i++] = x;
		else
			break;
	}
	cout << i;
	string str;
	int tmp = 1, k = 0;
	bool lock = 0;
	cin >> str;
	while  (k < str.length())	{
		lock = 1;
		for (int j = 0; j < i; j++)	{
			if (str.substr(k, tmp) == word[j] && lock == 1)	{
				cout << word[j] << endl;
				k = k + tmp;
				lock = 0;
			}
		}
		if (lock != 0)
			tmp++;
	}
}