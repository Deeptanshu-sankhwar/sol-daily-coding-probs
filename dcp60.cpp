#include <iostream>
using namespace std;

int main() {
	//code
  int n;
  cin >> n;
  int k;
  cin >> k;
  int ar[n];
  bool flag = 0;
  int sum = 0;
  for(int i =0; i < n;i++)  {
    cin >> ar[i];
  }
  for (int i = 0; i < (1<<n); i++)
  {
    for(int j = 0; j < n; j++)
    {
      if ((i & (1 << j)) > 0) {
        sum += ar[j];
      }
    }
    if (sum == k)
      flag = 1;
    sum = 0;
  }
  if (flag == 1)
    cout << "true";
  else
    cout << "false";
}