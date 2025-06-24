#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"a is "; cin>>a;
    cout<<"b is "; cin>>b ;
    c=a+b;
    a=c-a;
    b=c-b;
    cout<<a<<" ";
    cout<<b;
    return(0);
}