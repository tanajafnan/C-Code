#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>> n;
    for(int i = 1 ; i<= n ;i++)
    {
        int count = 0;
        for(int j = 2; j<= i/2 ;j++)
        {
            if(i%j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && i != 1)
        {
          cout<<i << " ";
        }
    }

    return 0;
}