#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> s;

    switch(s)
    {
        case 1:
            cout << "Addition of two numbers: " << a + b << endl;
            break;
        case 2:
            cout << "Subtraction of the smaller number from the larger number: " << abs(a - b) << endl;
            break;
        case 3:
            cout << "Multiplication of two numbers: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Division of two numbers: " << a / b << endl;
            else
                cout << "Error!" <<endl <<"Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
