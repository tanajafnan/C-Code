#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int n, r, c;
    cin>> n;

    for( r = 0; r < n;r++)
    {
        for(c = 0; c < n - r; c++)
        {
            cout<< " ";
        }
        for(c = 0; c< 2*r + 1; c++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
    return 0;
}