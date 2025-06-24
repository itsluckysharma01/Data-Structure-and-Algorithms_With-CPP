#include<iostream>
using namespace std;
int main()
{
int i,p,n,c=0,j,a[10],k;
cout<<" ENTER ARRAY SIZE "; 
cin>>n;

cout<<" ENTER THE ELEMENTS OF ARRAY :- ";
for(i=0;   i<n;  i++)
{
cout<<"  ";
cin>>a[i];
}
cout<<" ENTER THE ELEMENT TO BE SEARCHED  ";
cin>>k;


for(i=0;   i<n;   j++)

if( a[i]== k )
{
	c=1;
	p=i+1;
	break;
}


if(c==0)
{
cout<<"ELEMENT IS NOT FOUND ";
}
else
{
cout<<" ELEMENT "<<k<<" FOUND AT POSITION "<<p;

}

return 0;
}

