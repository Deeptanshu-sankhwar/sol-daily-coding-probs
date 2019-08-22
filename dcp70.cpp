//perfect number - 	Microsoft
#include <iostream>
using namespace std;

int perfect (int n)	{
	int dig_sum = 0;
	int temp = n;
	while(n>0)	{
		int r = n % 10;
		dig_sum += r;
		n = n/10;
	}
	return (temp*10) + (10 - dig_sum);
}

int main()	{
	int n; cin >> n;
	cout << perfect(n);
}