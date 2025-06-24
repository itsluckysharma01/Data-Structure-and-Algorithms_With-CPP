#include<iostream>
using namespace std;
int main()
{
   int n , reverse_number=0, reminder;
    cout<<" ENTER A NUMBER "; cin>>n;
    while(n>0){
        reminder=n%10;
        reverse_number=reverse_number*10+reminder;
        n=n/10;

    }
    cout<<" REVERSED NUMBER IS "<<reverse_number;

return(0);
}
