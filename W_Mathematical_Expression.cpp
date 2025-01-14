#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, r;
    char s, q;
    cin>> a>>s>>b>>q>>r;

    if(s == '+')
    { 
        if(a + b == r)
        { 
            cout << "Yes";
        }
        else 
        cout << a+b;
    }
    
    else if(s == '-')
    { 
        if(a - b == r)
        { 
            cout << "Yes";
        }
        else 
        cout << a-b;
    }
    
    else if(s == '*')
    { 
        if(a * b == r)
        { 
            cout << "Yes";
        }
        else 
        cout << a*b;
    }
}