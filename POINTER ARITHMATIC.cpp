#include<iostream>
using namespace std;
int main()
{
    char c='a';
    char *cptr=&c;
  {  cout<<cptr<<endl;} //2000 
    cptr++ //increment
   { cout<<c<<endl;} //2004
    return(0);

}