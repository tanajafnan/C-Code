#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{ 
    long long int a, b, c;
    cin>> a>> b>> c;
    long long int og_a = a, og_b = b, og_c = c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    cout <<a << endl<< b<< endl <<c<<endl; 
    
    cout <<endl<< og_a<<endl << og_b <<endl<< og_c;
}