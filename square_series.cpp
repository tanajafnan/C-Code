#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n, sum = 0;
    cout<< "Enter a digit: ";
    cin>> n;

    for(int i = 0; i<=n ;i++)
    {
        sum = sum + i*i;
    }
   cout<< sum;

    return 0;
}