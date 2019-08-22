#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

struct braces
{
	char start;
	char close;
};

int main()
{
	stack <int> st;
	char str[100];
	cin >> str;
	struct braces ar[3];
	ar[0].start = '(';
	ar[0].close = ')';
	ar[1].start = '[';
	ar[1].close = ']';
	ar[2].start = '{';
	ar[2].close = '}';
	for ( int i = 0; str[i] != '\0'; i++)	{
		if ( str[i] == ar[0].start )
			st.push(str[i]);
		else if ( str[i] == ar[1].start )
			st.push(str[i]);
		else if ( str[i] == ar[2].start )
			st.push(str[i]);
		else if( str[i] == ar[0].close && st.top() == ar[0].start )
			st.pop();
		else if( str[i] == ar[1].close && st.top() == ar[1].start )
			st.pop();
		else if( str[i] == ar[2].close && st.top() == ar[2].start )
			st.pop();
		else
			break;
	}
	//cout << st.size();
	//cout << char(st.top());
	if ( st.empty())
		cout << "True";
	else
		cout << "False";
}