#include <iostream>

using namespace std;

int main()	{
	int num; cin>> num;
	int div; cin >> div;
	int divCpy = div;
	int cnt = 0;
	while(num-div >= divCpy)	{
		cnt++;
		div += divCpy;
	}
	cout << ++cnt << endl;
}