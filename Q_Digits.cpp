#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int n;
   int t, i = 1;
   cin>> t;
   while(i <= t)
   {
    cin>> n;
    long long int rem;
    for(long long int i = n; i != 0; i = i/10)
    {
     rem = i%10;
     cout<< rem <<" ";
    }
    cout<<endl;
    i++;
   }

    return 0;
}