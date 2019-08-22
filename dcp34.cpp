//return minimum length palindrome of a given string
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool isPalindrome(string boo)	{
	string boo1 = boo;
	reverse(boo1.begin(), boo1.end());
	if (boo1 == boo)
		return true;
	return false;
}

int main()
{
	string str;
	int tmp = -1;
	cin >> str;
	for (int i = 1; i < str.size(); i++)	{
		if(isPalindrome(str.substr(0,i)))	{
			tmp = i;
		}
	}
	string dig = str.substr(tmp);
	//cout << dig;
	reverse(str.begin(), str.end());
	str.append(dig);
	cout << str;

}