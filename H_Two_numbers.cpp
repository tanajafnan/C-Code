#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    double res = (double)a/b;

    cout <<"floor " <<a <<" / " <<b <<" = " << floor(res)<<endl;
    cout <<"ceil " <<a <<" / " <<b <<" = " << ceil(res)<<endl;
    cout <<"round " <<a <<" / " <<b <<" = " << round(res)<<endl;

}