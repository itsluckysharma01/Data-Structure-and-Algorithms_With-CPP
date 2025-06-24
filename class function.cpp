#include<iostream>
using namespace std;
class studentClass
{
	int roll, rank;
	char address[100], name[50];
	public:
 void getRoll()
 {
 	cout<<" ENTER STUDENT ROLL NO "; cin>>roll;
 }
 void getName()
 {
 	cout<<" ENTER THE NAME OF STUDENT "; cin>>name;
 }
 void getRank()
 {
 	cout<<" ENTER STUDENT RANK ";
 	cin>>rank;
 }
 void getAddress()
 {
 	cout<<" ENTER STUDENT ADDRESS ";
 	cin>>address;}
 void display()
 {
 	cout<<" \n \n  STUDENT DETAILS ARE :- \n ";
 	cout<<" Name Is :- "<<name<<" \n Roll No. Is :- "<<roll;
 	cout<<" \n Rank Is :- "<<rank<<" \n Adress Of Student Is :- "<<address;
 }
};
int main()
{
	studentClass ss;
	ss.getName();
	ss.getRoll();
	ss.getRank();
	ss.getAddress();
	ss.display();
	return(0);
}




