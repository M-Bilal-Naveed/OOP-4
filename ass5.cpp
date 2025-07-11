#include <iostream>
using namespace std;
class student
{
	private:
		int admno;
		char sname[20];
		float eng, math, science;
		float total;
		float ctotal()
		{
			return eng + math + science;
		}
	protected:
	public:
		void takedata()
		{
			cout<<"Enter admission number:";
			cin>>admno;
			cout<<"Enter student name:";
			cin>>sname;
			cout<<"Enter marks of subjects:";
			cin>>eng;
			cin>>math;
			cin>>science;
			total = ctotal();
		}
		void showdata()
		{
			cout<<"Name of student is:"<<sname<<endl;
			cout<<"Admission number is:"<<admno<<endl;
			cout<<"total number is:"<<total<<endl;
		}
};
int main()
{
	student s1;
	s1.takedata();
	s1.showdata();
	return 0;
}
