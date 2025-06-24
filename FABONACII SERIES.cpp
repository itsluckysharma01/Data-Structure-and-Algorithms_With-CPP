#include<iostream>
using namespace std;
int main()
{
    int n, t1=0, t2=1, nextterm=0;
      cout<<" ENTER THE NUMBER OF TERMS "; cin>>n;
      cout<<" FABONACII SERIES IS: ";
      for(int i=1; i<=n; i++)
      {
        //print first two numvbers 
        if(i==1){
            cout<<t1<<", ";
            continue;
        }
        if(i==2){
            cout<<t2<<", ";
            continue;
      }
      nextterm=t1+t2;
      t1=t2;
      t2=nextterm;
      cout<<nextterm<<", ";
      }
return(0);
}