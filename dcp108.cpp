#include <iostream>

using namespace std;

int main()	{
	string s1, s2;
	cin >> s1 >> s2;
	int req = s1.length();
	s1 += s1;
	string temp = "";
	for (int i = 0; i < s1.length(); i++)	{
		temp = s1.substr(i,req);
		if (temp == s2)
			return 1; 
	}
	return 0;
}