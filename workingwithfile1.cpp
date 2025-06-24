#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("CARNAME");
    cout<<"ENTER THE CAR NAME ";
    char name[20];
    cin>>name;
    outf<<name<<" \n ";
    outf.close();
     ifstream inf("CARNAME");
     inf>>name;
    
    cout<<" YOU ENTERED CAR NAME IS:- "<<name;
    inf.close();
   
     return (0);

}