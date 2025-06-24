#include<iostream>
using namespace std;
int main()
{  
    int n; 
    cout<<" ENTER A NUMBER "; cin>>n;
    int factorial=1;
    if(n<0)
    {
        cout<<" FACTORIAL OF NEGATIVE NUMBER IS NOT EXIST";
    }
    else{
        for(int i=1; i<=n; i++)

        {
            factorial=factorial*i;
        }
        cout<<" FACTORIAL OF "<<n<<" IS = "<<factorial;
    }

    return(0);
}
