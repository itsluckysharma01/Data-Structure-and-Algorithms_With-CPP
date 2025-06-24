#include<iostream>
using namespace std;
void swap(int &num1,int &num2)
{
    int temp;
    temp=num1; 
    num1=num2;
    num2=temp;
}
int main()
{

    int a=10, b=5;
    cout<<" BEFORE SWAP"<<" \n A = "<<a<< "\n B="<<b<<endl;
    swap(a,b);
    cout<<" AFTER SWAP "<<"\n A= "<<a<<"\n B= "<<b<<endl;
    return(0);


}
