#include<iostream>
#include<sstream>
using namespace std;

void encoding (string str)	{
	int tmp = 1;
	for ( int i= 0; i < str.size()-1; i++)	{
		if(str.substr(i,1) == str.substr(i+1,1))	{
			tmp++;
		}
		else
		{
			if (tmp == 1)
				cout << "1" << str.substr(i,1);
			else

			{
				cout << tmp << str.substr(i,1);
				tmp = 1;
			}
		}
	}
}

bool isNumber(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false; 
  
    return true; 
} 

int convert(string str)	{
	stringstream geek(str);
	int x = 0;
	geek >> x;
	return x;
}

void decoding (string str)	{
	for (int i = 0; i < str.size()-1; i++)	{
		if (isNumber(str.substr(i,1)))	{
			string ch = str.substr(i+1,1);
			int x = convert(str.substr(i,1));
			while(x-- > 0)
				cout << ch;
		}
	}
}

int main()
{
	string str;
	cin >> str;
	char ch;
	cout << "e-> encoding | d-> decoding";
	cin >> ch;
	if (ch == 'e')
		encoding(str);
	else if( ch == 'd')
		decoding(str);
	else
		exit(0);
}