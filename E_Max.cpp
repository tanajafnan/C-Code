#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n; 
    cin>> n;

    long long int a[n];
    for(long long int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    long long int max = a[0];
    for(long long int i = 0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
        cout<< max;




    return 0;
}