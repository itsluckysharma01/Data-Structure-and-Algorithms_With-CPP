#include<iostream>
using namespace std;
int main()
{
  float radius, hight, volume;
  
  cout<<"enter the radius of the cylinder:\n "; cin>>radius;
  cout<<"enter the hight of the cylinde:\n "; cin>>hight;
   volume= 3.14*radius*radius*hight;
     cout<<"volume  of the cylender is:\n " <<volume<<endl;
     return(0);
}