#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    long long int last_digit, first_digit;
    
    last_digit = n % 10;
    first_digit = n / 10;

    if(first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}