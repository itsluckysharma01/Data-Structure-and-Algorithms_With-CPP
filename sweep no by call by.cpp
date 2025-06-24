#include<iostream>
using namespace std;
int main()
{
    int a,b, temp,x,y ;
    cout<<"a is "; cin>>a;
    cout<<"b is "; cin>>b;
    x=&a;
    y=&b;
    
    temp=*x;
    *x=*y;
    *y=temp;
   cout<<a<<b;
   return(0);
}
