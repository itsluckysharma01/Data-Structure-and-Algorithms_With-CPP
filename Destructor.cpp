#include<iostream>
using namespace std;
int count=0;
class demo
{
public:
demo()
{
	count++;
	cout<<"\n No Of Object Created "<<count;
	}	
	~demo()
	{
	
		cout<<" \n No. Of Object Destroyed "<<count;
			count--;	
	}
	
};
int main()
{
	demo aa,bb,cc;
	{
	demo dd;
	}
	return(0);
}
