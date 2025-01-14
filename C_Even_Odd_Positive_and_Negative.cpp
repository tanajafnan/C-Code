#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;

    cin>> n;
    long long int even = 0, odd = 0, pos = 0, neg = 0;

    long long int a[n];

    for(long long int i = 0; i<n; i++)
    {
        cin>> a[i];
    }

    for(long long int i = 0 ; i<n; i++)
    {
        if(a[i]%2 == 0)
        { 
            even++;
        }

        else
        {
           odd++;
        }

        if(a[i]>0)
        {
            pos++;
        }

        else if(a[i]<0)
        {
            neg++;
        }
    }
        cout<< "Even: "<< even<<endl;
        cout<< "Odd: "<<odd<<endl;
        cout<< "Positive: "<<pos<<endl; 
        cout<<"Negative: "<<neg<<endl; 

    return 0;
}