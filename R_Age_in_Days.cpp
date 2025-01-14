#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, yr, month, day;
    cin>> a;

    yr = a / 365;

    a = a - yr*365;

    month = a / 30;

    day = a - month * 30;


    cout << yr <<" years"<<endl <<month <<" months" << endl<< day <<" days";
}
