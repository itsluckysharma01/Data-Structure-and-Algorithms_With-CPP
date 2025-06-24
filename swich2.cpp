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
           
            case 'b':
                cout<< "namste" << endl;
           
            case 'c':
                cout<< "hoho" <<endl;
           
            case 'd':
                cout<< "hola " <<endl;
          
            case 'e':
                 cout<< "good day" << endl;
            
            default:
                cout<< "i am still learning "<<endl;
           
        
        }

    return(0);

}