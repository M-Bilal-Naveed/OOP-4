#include <iostream>
using namespace std;
class Student
   {
   	private:
   		char name [10];
   		int roll_no;
   		int m1, m2, m3;
   		int total, average;
   	protected:
   	public:
   		void set_Data()
   		 {
   		 	cout<<"Enter student name:";
   		 	cin>>name;
   		 	cout<<"Enter roll_no:" ;
   		 	cin>>roll_no;
   		 	cout<<"Enter number of first subject:";
   		 	cin>>m1;
   		 	cout<<"Enter number of second subject:";
   		 	cin>>m2;
   		 	cout<<"enter number of third subject:";
   		 	cin>>m3;
		}
	   void get_Average()
	   {
	   	cout<<"Student name:"<<name<<endl;
	   	cout<<"Roll_no of student:"<<roll_no<<endl;
	   	cout<<"Marks of first subject:"<<m1<<endl;
	   	cout<<"Marks of second subject:"<<m2<<endl;
	   	cout<<"Marks of third subject:"<<m3<<endl;
	   	total=m1+m2+m3;
	   	average= total/3;
	   	cout<<"Average marks of"<<name<<"will be"<< average <<endl;
	   }
   };
   int main()
   {
   	Student s1, s2, s3;
   	s1.set_Data();
   	s1.get_Average();
   	s2.set_Data();
   	s2.get_Average();
   	s3.set_Data();
   	s3.get_Average();
   	return 0;
   }
