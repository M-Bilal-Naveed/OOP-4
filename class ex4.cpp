#include <iostream>
using namespace std;
class Student
  {
  	private:
  		char name[10];
  		int roll_no;
  		int m1,m2,m3;
  		int total,average;
  	public:
  		void set_Data()
  		{
  		cout<<"Enter student name:";
  		cin>>name;
  		cout<<"Enter roll no of student:";
  		cin>>roll_no;
  		cout<<"Enter marks of first subject:";
  		cin>>m1;
  		cout<<"Enter marks of second subject:";
  		cin>>m2;
  		cout<<"Enter marks of third subject:";
  		cin>>m3;
  	    }
  	void get_average()
  	{
  		cout<<"student name:"<<name<<endl;
  		cout<<"roll no"<<roll_no<<endl;
  		cout<<"marks of first subject:"<<m1<<endl;
  		cout<<"marks of second subject:"<<m2<<endl;
  		cout<<"marks of third subject:"<<m3<<endl;
  		total = m1+m2+m3;
  		average = total/3;
  		cout<<"Average marks of"<<name<<"will be"<<average;
	  }
  };
int main ()
  {
  	Student S1,S2,S3;
  	S1.set_Data();
  	S1.get_average();
  	
  	S2.set_Data();
  	S2.get_average();
  	
  	S3.set_Data();
  	S3.get_average();
  	return 0;
  }
