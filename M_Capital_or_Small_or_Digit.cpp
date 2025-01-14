#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    char c;
    cin>> c;
    if(isupper(c))
    { 
        cout <<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(isdigit(c))
    { 
        cout << "IS DIGIT";
    }
    else if(islower(c))
    { 
        cout <<"ALPHA"<<endl<<"IS SMALL";
    }
}