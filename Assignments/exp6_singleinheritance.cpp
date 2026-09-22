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

public:
void getStudentData() {
getPersonData();

cout << "Enter roll number: ";
cin >> rollNo;
}

void display() {
cout << "\n--- Student Details ---" << endl;

cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Roll No: " << rollNo << endl;
}
};

int main() {
Student s;
s.getStudentData();
s.display();
return 0;
}



