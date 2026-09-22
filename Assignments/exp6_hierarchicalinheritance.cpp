#include <iostream>
using namespace std;

class Person {
protected:
string name;
int age;

public:
void getPersonData() {
cout << "Enter name: ";
cin >> name;

cout << "Enter age: ";
cin >> age;
}
};

class Student : public Person {
private:
int rollNo;

public : void getStudentData() 
{
getPersonData();
cout << "Enter roll number: ";
cin >> rollNo;
}

void displayStudent() {
cout << "\n---- Student ----" << endl;
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Roll No: " << rollNo << endl;
}
};

class Teacher : public Person {
private:
string subject;

public: void getTeacherData()
{
getPersonData();

cout << "Enter Subject: ";
cin >> subject;
}

void displayTeacher() {
cout << "\n--- Teacher ---" << endl;
cout << "Name: " << name << endl;
cout << "Age: " <<  age << endl;
cout << "Subject: " << subject << endl;
}
};

int main() {
Student s;
Teacher t;

cout << "Enter Student Details\n";
s.getStudentData();

cout << "\nEnter Teacher Details\n";

s.displayStudent();
t.displayTeacher();

return 0;
}




