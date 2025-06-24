#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character : "; cin>>button;
   // if (button=='a')
   // {
        //cout<<"hellow"<<endl;
    //}
    //else if (button=='b')
    //{
        //cout<<"namste"<<endl;
    //}
    //else if (button=='c')
    //{
       // cout<<"hoho"<<endl;
   // }
    //else if (button=='d')
   // {
     //   cout<<"hola"<<endl; }//
    //else if (button=='e')
    //{
      //  cout<<"good day"<<endl;}
        //else
        //{ cout<<"i am still learning"<<endl;}
        switch (button)
        {
            case 'a':
               cout<< "hellow" << endl;
            break;
            case 'b':
                cout<< "namste" << endl;
            break;
            case 'c':
                cout<< "hoho" <<endl;
            break;
            case 'd':
                cout<< "hola " <<endl;
            break;
            case 'e':
                 cout<< "good day" << endl;
            break;
            default:
                cout<< "i am still learning "<<endl;
            break;
        
        }

    return(0);

}