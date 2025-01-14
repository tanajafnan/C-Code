#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cout << "Enter a Name: ";
    cin >> n;

    int l = n.length();
    for (int i = 0; i < l / 2; ++i) {
        char temp = n[i];
        n[i] = n[l - i - 1];
        n[l - i - 1] = temp;
    }

    cout << "Reversed string: " << n << endl;

    return 0;
}
