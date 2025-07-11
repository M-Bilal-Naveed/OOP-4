#include <iostream>
#include <cstring>
using namespace std;
class Box
   {
   	private:
   		int length;
   		int breadth;
    public:
    	int height;
    	void setData(int l, int b, int h)
    	{
    		length = l;
    		breadth = b;
    		height = h;
		}
		int getLength()
		 {
		 	return length;
		 }
		 int getBreadth()
		 {
		 	return breadth;
		 }
   };
int main ( )
   {
	Box b1;
	b1.setData(10,6,5);
	cout<<"Length of Box :"<<b1.getLength()<<endl;
	cout<<"Breadth of Box :"<<b1.getBreadth()<<endl;
	cout<<"Height of Box :"<<b1.height<<endl;
	return 0;
   }   
