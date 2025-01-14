#include<iostream>
using namespace std;
int main()
{ 
   int t;
   cin>> t;

   for(int i= 0; i< t; i++)
   {
    int a, b;
    cin>> a >> b;
   

   if((a + 2 * b)%2 == 0)
   {
    if(a%2 == 1 && b == 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<< "YES"<<endl;
    }
   }
    else
    {
        cout<< "NO" <<endl;
    }
   }
   return 0;
}
    
