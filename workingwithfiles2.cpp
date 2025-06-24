#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("STUDENT");
    char name[20];
    cout<<"Enter The Student Name:- ";
    cin>>name;
    outf<<name<<"\n";
    outf.close();

    ofstream outf("ROLLNO");
    int roll;
    cout<<"Enter Roll No Is:- ";
    cin>>roll;
    outf<<roll<<"\n";
    outf.close();

    ifstream inf("STUDENT");
    inf>>name;
     inf>>roll;
     cout<<"STUDENT NAME IS "<<name<<endl;
     cout<<"ROLL NO IS "<<roll<<endl;
     inf.close();
     return(0);


}