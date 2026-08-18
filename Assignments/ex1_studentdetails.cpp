#include<iostream>
using namespace std;
class student{
private:
char name[30];
int rollno;
float marks;
public:
void inputDetails(){
cout<<"Enter student name:";
cin>>name;
cout<<"Enter rollNo:";
cin>>rollno;
cout<<"Enter marks:";
cin>>marks;
}
void displayDetails(){
cout<<"Student Name:"<<name<<endl;
cout<<"RollNo:"<<rollno<<endl;
cout<<"Marks:"<<marks<<endl;
}
};
int main(){
student studentObj;
studentObj.inputDetails();
cout<<"\n studentDetails:\n";
studentObj.displayDetails();
return 0;
}
