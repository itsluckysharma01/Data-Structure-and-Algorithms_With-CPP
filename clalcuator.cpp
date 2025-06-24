//impliment a simpe calculator using switch
#include<iostream>
using namespace std;
int main()
{
     float n1,n2;
     cout<<" input two number: \n "; cin>>n1>>n2;
     char op;
     cout<<"input an operator: "; cin>>op;

     switch(op)
    {
     case'+':   
        cout<<n1+n2<<endl;
        break;   
     case'-'   :
        cout<<n1-n2<<endl;
         break;   
    case'*':    
            cout<<n1*n2<<endl;
         break;    
    case'/':    
        cout<<n1/n2<<endl;
         break;
         

    default:   
        cout<<" ENTER ANOTHER OPERATOR: "<<endl;
        break;

     }
     
     
     return(0);
     

}
