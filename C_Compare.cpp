#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{ 
    char s1[100], s2[100];
    cin>> s1 >>s2;
   
    if (strcmp(s1, s2) < 0)
    {
        cout<< s1;
    }
    else
    {
        cout<< s2;
    }

    return 0;
}