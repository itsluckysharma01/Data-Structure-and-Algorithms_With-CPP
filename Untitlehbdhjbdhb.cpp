#include<iostream>
using namespace std;
int main()
{
	float radius, hight, area;
	cout<<" ENTER THE RADIUS: "; cin>>radius;
	cout<<"\n ENTER THE HIGHT OF CYLINDER: ";cin>>hight;
	 area = 2*3.14*radius*hight+2*3.14*radius*radius;
	cout<<" \n SURFACE AREA IS : "<<area<<endl;
	return(0);
	
}