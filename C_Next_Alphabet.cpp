#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s;
     
    char n;

    if(s == 'z')
    {
        n = 'a';
        cout << n ;
    }
    else
    {
        n = s+1;
        cout << n;
    }
}