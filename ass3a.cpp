#include <iostream>
using namespace std;
class Test
 {
 	private:
 		int x;
 	public:
 		void set()
 		{
 		 cout<<"Enter a value";
		  cin>>x;	
		}
		void get()
		{
		 cout<<"enter value is"<<x;
		}
 };
int main ()
 {
 	Test obj;
 	obj.set();
 	obj.get();
 	return 0;
 }
