#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int n;
   cin>> n;
   long long int t , sum = 0;
   t = n;
   for(long long int i = n; i > 0 ; i= i/10)
   {
     int r = i%10;
     sum = sum*10 + r;
   }
   if(sum == t)
   {
    cout<< sum <<endl<< "YES";
   }
   else
   {
    cout<< sum << endl <<"NO";
   }
    return 0;
}