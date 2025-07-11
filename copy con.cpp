#include <iostream>
using namespace std;
class point
{
	private:
		int x;
		int y;
	public:
		point(int x1,int y1)
		{
			x = x1;
			y = y1;
		}
	    point(const point &p)
	    {
	    	x = p.x;
	    	y = p.y;
	    	cout<<"Address of p="<<&p<<endl;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
};
int main ()
{
	point p1(10,15);
	cout<<"Address of P1 is:"<<&p1<<endl;
	point p2 = p1;
	cout<<"p1.x="<<p1.getX()<<"p1.y="<<p1.getY()<<endl;
	cout<<"p2.x="<<p2.getX()<<"p2.y="<<p2.getY()<<endl;
	cout<<"Address of p2 is:"<<&p2<<endl;
	point p3 = p2;
	cout<<"p3.x="<<p3.getX()<<"p3.y="<<p3.getY()<<endl;
	cout<<"Address of p3 is:"<<&p3<<endl;
	return 0;
}
