#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two values to swap: ";
    cin >> a >> b;

    int *ptra = &a;
    int *ptrb = &b;
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    cout << "After swapping: " << endl;
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;

    return 0;
}
