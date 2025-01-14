#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ 
    long long int a, b, c, maxn, minn;
    cin>> a >> b >>c;
    maxn = max({a, b, c});
    minn = min({a, b, c});
    cout << minn <<" " << maxn;
}