#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("COUNTRY");
    fout<<"INDIA \n "<<"\n";
    fout<<"UNITED STATE OF AMRICA \n "<<"\n";
    fout<<"UNITED KINGDOM \n "<<"\n";
    fout.close();

    fout.open("CAPITAL");
    fout<<"NEW DELHI \n ";
    fout<<"WASINGTON \n ";
     fout<<"LONDON \n ";
     fout.close();

     // READING THE FILE 
     const int N = 80; //line size
     char line[N];
     
     ifstream fin;
     fin.open("COUNTRY");
     cout<<"contents of country is:- ";
     while(fin)
     {
        fin.getline(line,N);
        cout<<line;
     }
     fin.close();

     fin.open("CAPITAL");
     cout<<"capitals of country is:- ";
     while(fin)
     {
        fin.getline(line,N);
        cout<<line;
     }
     fin.close();
     return(0);

}