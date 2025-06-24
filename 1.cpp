#include<iostream>
using namespace std;
int main()
{
	int count=0;
	char a;
	char b;
	
	cout<<" enter a  ";
	cin.get(a);
	
	
	while(a != '\n'){
			cout<<"A is= ";
cout.put(a);
	count++;
	cin.get(a);
	}
		cout<<" enter b  ";
	cin.get(b);
	
	while(b != '\n'){
			cout<<"B is= ";
cout.put(b);

	count++;
	cin.get(b);
	}

	
	return(0);
}
