#include<bits/stdc++.h>
using namespace std;
int main ()
{ 
    long long int n ;
    cin>> n;
    long long int a[n], store = 0;

    for(int i = 0; i<n; i++)
    {
        cin>> a[i];
        store = store + a[i];
    }

    cout <<abs(store);
}