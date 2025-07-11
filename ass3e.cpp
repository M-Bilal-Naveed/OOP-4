#include <iostream>
using namespace std;
class result
{
	private:
		int rollno;
		char name[20];
		int marks[3];
	protected:
	public:
		int sum = 0;
		void input()
		{
			cout<<"Enter name of student:";
			cin>>name;
			cout<<"Enter rollno of student:";
			cin>>rollno;
			for(int i=0 ; i<3 ; i++)
			{
			cout<<"Enter Marks of subject"<<i+1<<endl;;
			cin>>marks[i];
		    }
		}
		void show()
		{
		   	cout<<"Enter name of student:"<<name<<endl;
			cout<<"Enter rollno of student:"<<rollno<<endl;
			for(int i=0 ; i<3 ; i++)
			cout<<"Enter Marks of subject :"<<i+1<<marks[i]<<endl;
		}
		int total()
		{
			for(int i=0 ; i<3 ; i++)
			sum +=marks[i];
			return sum;
		}
		float avg()
		{
			return sum/3.0;
		}
};
int main()
{
	result s1;
	s1.input();
	s1.show();
	cout<<"Total marks is:"<<s1.total()<<endl;
	cout<<"Average of marks is:"<<s1.avg()<<endl;
	return 0;
}

