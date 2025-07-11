#include <iostream>
using namespace std;
const float credit_hour = 3.0;
class result
 {
 	private:
 	char name[20];
 	int rollno;
 	int marks[5];
 	float grade[5];
 	float gradepoints[5];
 	float t_gradepoints = 0;
 	float gpa[3];
 	float sum = 0;
 	protected:
 	public:
 		void getData()
 		{
 		    cout<<"Enter name of student:"<<endl;
			 cin>>name;
			 cout<<"Enter rollno of student:"<<endl;
			 cin>>rollno;
			 for(int j=0 ; j<3 ; j++)
			 {
			 	for(int i=0 ; i<5 ; i++)
			 	{
			 		cout<<"Enter marks of subject:"<<i+1<<endl;
			 		cin>>marks[i];
			 		if(marks[i] >= 85)
			 		grade[i] = 4.0;
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
                     else grade[i]=0;
                     gradepoints[i] = grade[i] * credit_hour;
                     t_gradepoints += gradepoints[i];
				}
				gpa[j] = t_gradepoints / 15.0;
				cout<<"GPA in semester"<<j + 1<<"is"<<gpa[j] / (j+1)<<endl;
				sum += gpa[j] / (j+1);
			 }	
			 float cgpa = sum / 3.0;
			 cout<<"Name of student:"<<name<<endl;
			 cout<<"Rollno of student:"<<rollno<<endl;
			 cout<<"CGPA of student:"<<cgpa<<endl;
		}
 };
 int main()
  {
  	result r1;
  	r1.getData();
  	result r2;
  	r2.getData();
  	result r3;
  	r3.getData();
  	return 0;
  }
