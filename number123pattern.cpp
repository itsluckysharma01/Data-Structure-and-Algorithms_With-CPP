#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int c=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {cout<<" ";
        }
        for (int j=1; j<=i; j++)
        {
            cout<<c<<" ";
            c++;
            }

    cout<<endl;
    }
    return(0);
}
