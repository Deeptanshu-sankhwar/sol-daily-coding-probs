//google valid paranthesis string - O(n) time
#include <iostream>

using namespace std;

int main()	{
	string str;
	cin >> str;
	int sum = 0, count = 0;
	for (int i = 0; str[i] != '\0'; i++)	{
		if (str.at(i) == '(')
			sum++;
		if (str.at(i) == ')')
			sum--;
		if (sum < 0)	{
			count++;
			sum = 0;
		}
		if (i == str.length() - 1 && sum > 0)	{
			count += sum;
		}
	}
	cout << count << endl;
}