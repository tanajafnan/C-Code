#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   long long int a, b, rem, n1, n2;
   cin>> a >> b;
   n1 = a, n2 = b;

   while(n2 != 0)
   {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
   }
    cout << n1;
    return 0;
}