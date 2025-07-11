#include <iostream>
using namespace std;
class result{
private:
int rollno;
char name[10];
int marks[3];
public:
int sum=0;
void input(){
cout<<"Enter roll: ";
cin>>rollno;
cout<<"Enter Name: ";
cin>>name;
for(int i=0;i<3;i++){
cout<<"Enter subject "<<i+1<<" marks: ";
cin>>marks[i]; 
}
}
void show(){
cout<<"Roll is: "<<rollno<<endl;
cout<<"Name is: "<<name<<endl;
for(int i=0;i<3;i++){
cout<<"Subject "<<i+1<<" marks are: "<<marks[i]<<endl; 
}
}
int total(){
for(int i=0;i<3;i++)
sum+=marks[i];
return sum;
}
float avg(){
return sum/3.0;
} 
};
int main(){
result s1;
s1.input();
s1.show();
cout<<"Total marks are: "<<s1.total()<<endl;
cout<<"Average is: "<<s1.avg();
return 0;
}
