#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int n;

    cin>> n;
    
       if(n<2)
        { 
            cout<<-1 <<endl;
        }
        else
        {
            for(int i = 2 ; i<= n ; i= i+2)
            {
              cout<<i<<endl;
            }        
        }

    return 0;
}