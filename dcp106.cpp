//hop-hop
#include <iostream>

using namespace std;

int main()	{
	int n;	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	int loc = 0;
	for (int i = 0; i < n;)	{
		int prevI = i;
		loc = ar[i] + loc;
		i = loc;
		if (loc == n-1)	{
			cout << "true" << endl;
			break;
		}
		if (prevI == i)	{
			cout << "false" << endl;
			break;
		}
		// cout << "false" << endl;
	}
}