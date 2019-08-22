#include <iostream>
using namespace std;
//solution in O(log n)
int power(int x, unsigned int y) 
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 

int main() {
	//code
  int n;
  int p;
  cin >> n >> p;
  cout << power(n,p) << endl;
  
}