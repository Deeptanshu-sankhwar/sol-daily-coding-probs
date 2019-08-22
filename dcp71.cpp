// rand7 to rand5
#include <iostream>
#include <random>
using namespace std;
std::mt19937 rng(time(NULL));

int rand7()	{

	std::uniform_int_distribution<int> distribution(1, 7);
  	return distribution(rng);
}

int rand5()	{
	int temp = rand7();
	while(temp == 7 || temp == 6)
		temp = rand7();
	return temp;
}

int main()	{
	cout << rand5();
}