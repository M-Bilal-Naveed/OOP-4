#include <iostream>
using namespace std;
const float credit_hour = 3.0;
class result
  {
  	private:
  		char name [20];
  		int roll_no;
  		int marks[5];
  		float grade[5];
  		float gradepoints[5];
  		float t_gradepoints=0;
  	protected:
  	public:
  		void getData()
  		{
  		 cout<<"Enter name of student:"<<endl;
		 cin>>name;
		 cout<<"Enter Roll_no of student:"<<endl;
		 cin>>roll_no;
		 for(int i=0; i<5 ; i++)
		  {
		  	cout<<"Enter marks for Subject:"<<i+1<<endl;
		  	cin>>marks[i];
		  	if(marks[i] >= 85)
		  	grade[i]=4.0;
		  	else if(marks[i]>=80 && marks[i]<85)
		  	grade[i]=3.7;
		  	else if(marks[i]>=75 && marks[i]<80)
		  	grade[i]=3.3;
		  	else if(marks[i]>=70 && marks[i]<75)
		  	grade[i]=3.0;
		  	else if(marks[i]>=65 && marks[i]<70)
		  	grade[i]=2.7;
		  	else if(marks[i]>=61 && marks[i]<65)
		  	grade[i]=2.3;
		  	else if(marks[i]>=58 && marks[i]<61)
		  	grade[i]=2.0;
		  	else if(marks[i]>=55 && marks[i]<58)
		  	grade[i]=1.7;
		  	else if(marks[i]>=50 && marks[i]<55)
		  	grade[i]=1.0;
		  	else grade[i]=0.0;
		  	gradepoints[i]=grade[i] * credit_hour;
		  	t_gradepoints += gradepoints[i];
		  }	
		   float gpa = t_gradepoints/15.0;
		   cout<<"Name of Student:"<<name<<endl;
		   cout<<"Roll_no of Student:"<<roll_no<<endl;
		   cout<<"Marks of first subject:"<<marks[0]<<endl;
		   cout<<"Marks of second subject:"<<marks[1]<<endl;
		   cout<<"Marks of third subject:"<<marks[2]<<endl;
		   cout<<"Marks of forth subject:"<<marks[3]<<endl;
		   cout<<"Marks of fifth subject:"<<marks[4]<<endl;
		   cout<<"GPA:"<<gpa<<endl;
		}
  };
  int main()
  {
  	result ros;
  	ros.getData();
  	return 0;
  }
