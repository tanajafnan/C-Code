#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int n;
  cin>> n;

  int arr[n], pos = -1;

  for(int i = 0;i<n;i++)
  {
    cin>> arr[i];
  }
  int v;
  cin>> v;

  for(int i = 0; i<n;i++)
  {
    if(v == arr[i])
    {
        pos = i;
        break;
    }
  }
  if(pos == -1)
  {
    cout<< "-1";
  }
  else
  {
    cout<< pos;
  }

   
    return 0;
}