#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int n, row, col;
    cin>> n;
    for(row = 1; row<= n;row++)
    {
        for(col = 1; col <=row; col++)
        {
            cout<<"*";
        }
        cout<< endl;
    }

   

    return 0;
}