#include <iostream>
using namespace std;
class circle
{
	private:
		float radius;
	protected:
	public:
		void get_radius(float r)
		{
			radius = r;
		}
		void area()
		{
			cout<<"radius is:"<<radius<<endl;
			cout<<"Area is:"<< (3.14 * radius * radius)<<endl;
		}
		void circum()
		{
			cout<<"circumference is:"<<(2 * 3.14 * radius)<<endl;
		}
};
int main()
{
	circle x;
	float r;
	cout<<"Enter radius"<<endl;
	cin>>r;
	x.get_radius(r);
	x.area();
	x.circum();
	return 0;
}
