#include <iostream>
using namespace std;
int sum(int , int);
void g(void);
int main ( )
{
	int num1 , num2;
	cout<<"ENTER FIRST NAME:"<<endl;
	cin>>num1;
	cout<<"ENTER SECOND NAME:"<<endl;
	cin>>num2;
	cout<<"SUN IS:"<<sum(num1 , num2);
	g();
	return 0;
}


	int sum(int a , int b)
	{
		int c = a + b;
	return c;
}
void g(void)
{
	cout<<"\nGOOD MORNING"; 
}
