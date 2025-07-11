#include <iostream>
using namespace std;
class marks
{
	private:
		int x, y, z;
	public:
		void in()
		{
			cout<<"Enter marks of three subjects:"<<endl;
			cin>>x,y,z;
		}
		float sum()
		{
			return x+y+z;
		}
		float average()
		{
			return (x+y+z)/3.0;
		}
};
int main()
 {
 	marks s1;
 	s1.in();
 	cout<<"sum of marks:"<<s1.sum()<<endl;
 	cout<<"Average of marks:"<<s1.average()<<endl;
 	return 0;
 }
