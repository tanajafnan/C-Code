#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int number, i, res = 1;

    cout<<"Input Number : ";
    cin>> number;

    for(i = 1; i<= number; i++)
    {
        res = res*i;
    }
    cout<< "The Factorial : "<<res;

    return 0;
}