#include<iostream>
using namespace std;
class demo
{
int a, b;
public:
demo()
{
	a=10;
	b=30;
}
void putData();

};
void demo::putData()
{
	cout<<"a is "<<a<<" b is "<<b;
}
int main()
{
	demo d;
	d.putData();
	return(0);
}
