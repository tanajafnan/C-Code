#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if(n == 0 || n == 1)
  {
    cout << "NO";
  }
  int count = 0;
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      count++;
    }
  }
  if(count > 2)
  {
    cout << "NO";
  }
  else 
  {
    cout << "YES";
  }
  return 0;
}