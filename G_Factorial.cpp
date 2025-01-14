#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n;

    cin>>t;
   for(int i = 1; i<=t;i++)
    {
        cin>> n;
        long long int res = 1;
        for(int i = 1;i <= n; i++)
        {
            res = res*i;
        }
        
         cout << res <<endl;
    }

    return 0;
}