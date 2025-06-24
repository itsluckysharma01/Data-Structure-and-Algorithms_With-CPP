#include<iostream>
using namespace std;
int main()
{
  
  
  int max[5];
 int sum=0;
 cout<<"input the numbers "; 
  for(int i=0; i<5; i++)
  {
     cin>>max[i];
     }
     {
      for(int i=0; i<5; i++)
     {
      sum=sum+max[i];
     }
     cout<<"THE SUM OF ARRAY ELEMENTS ARE :- "<<sum;
     }
     return(0);

}