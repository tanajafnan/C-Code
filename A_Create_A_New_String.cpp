#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s1, s2;
    cin>> s1 >> s2;

    long long int len1 = 0, len2 = 0;
    while(s1[len1] != '\0')
    {
        len1++;
    }

    while(s2[len2] != 0)
    {
        len2++;
    }
    cout<<len1 <<' ' <<len2<<endl;
    cout<< s1 << ' ' << s2;
   
    return 0;
}