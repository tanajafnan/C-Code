#include<iostream>
using namespace std;
int main()
{
  int n, i, res = 0;
  cout<<"Enter a positive integer: ";
  cin>>n;


  if (n == 0 || n == 1)
    res = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      res = 1;
      break;
    }
  }

  if (res == 0)
    cout<<n <<" is a prime number.";
  else
    cout<<n <<" is not a prime number.";

  return 0;
}