#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo()
		{
			a=10;
		}
		demo(int x)
		{
			a=x;
		}
		demo(demo &z)
		{
			a=z.a;
		}
		void putdata()
		{
			cout<<"\n a= "<<a;
		}
};
int main()
{
	demo aa;
	demo bb(20);
	demo cc(aa);
	aa.putdata();
	return(0);
}
