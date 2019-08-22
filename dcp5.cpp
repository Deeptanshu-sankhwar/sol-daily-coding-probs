//constructing a pair and returning first and last on car and cdr
#include<iostream>
#include<utility>
using namespace std;
std::pair<int,int> cons(int a, int b)
{
	return std::make_pair(a,b);
}
void car(pair<int,int> P)
{
	cout<<P.first;
}
void cdr(pair<int,int> P)
{
	cout<<P.second;
}
int main()
{
	int first, second;
	cin>>first>>second;
	std::pair<int,int> foo = cons(first, second);
	car(foo);
	cout<<endl;
	cdr(foo);
}