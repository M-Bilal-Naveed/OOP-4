#include <iostream>
using namespace std;
void swap(a , b);
int main ( )
{
	int x=4;
	int y=5;
	cout<<"Value of x is:"<<x<<"and"<<"Value of y is:"<<y<<endl;
	swapReferenceVar(x , y);
	cout<<"Value of x is:"<<x<<"and"<<"Value of y is:"<<y<<endl;
	return 0;
}
void swap( a , b);
{
    int	temp =int a;
	a =int b;
	b = temp;
}
