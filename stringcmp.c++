#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>> s1 >>s2;

    int len1 = 0, len2 = 0;
    while (s1[len1] != 0)
    {
        len1++;
    }
    cout << "legnth of 1st string " << len1 << endl;
    while (s2[len2] != 0)
    {
        len2++;
    }
    cout << "length of 2nd string " << len2 << endl;

    if (len1 > len2)
        cout << "1st string is greater" << endl;
    else if (len1 < len2)
    {
        cout << "2nd string is greater";
    }
    else
    {
        cout << "equal";
    }

    return 0;
}