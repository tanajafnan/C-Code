#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int a, b, res;
    char s;
    cin >> a >> s >> b;
     
     switch(s)
     { 
        case '+' :
        res = a + b;
        cout << res;
        break;

        case '-' :
        res = a - b;
        cout << res;
        break;

        case '*' :
        res = a * b;
        cout << res;
        break;

        case '/' :
        res = a / b;
        cout << res;
        break;
     }
}    