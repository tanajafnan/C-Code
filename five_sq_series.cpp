#include<bits./stdc++.h>
#include<cmath>
using namespace std;
int main()
{ 
  int n, sum = 0;
  cout<<"Enter digit : ";
  cin>> n;

  for(int i=0; i<=n; i++)
  {
    sum = sum + pow(i,5);
  } 
  cout<< sum;

    return 0;
}