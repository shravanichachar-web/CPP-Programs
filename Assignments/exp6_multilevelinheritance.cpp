#include <iostream>
using namespace std;

class Student {
protected:
int rollNo;

public:
void getStudentData()
{
cout << "Enter roll number: ";
cin >> rollNo;
}
};

class Exam : public Student {
protected:
float marks1, marks2, marks3;

public:
void getExamData() {
getStudentData();

cout << "Enter marks of Subject 1: ";
cin >> marks1;

cout << "Enter marks of Subject 2: ";
cin >> marks2;

cout << "Enter marks of Subject 3: ";
cin >> marks3;
}
};

class Result : public Exam
{
public:
void displayResult() {
float total = marks1 + marks2 + marks3;
float percentage = total/3;

cout << "\n--- Result ---" << endl;
cout << "Roll No: " << rollNo << endl;
cout << "Total Marks: " << total << endl;
cout << "Percentage: " << percentage << "%" << endl;
}
};

int main() {
Result r;

r.getExamData();
r.displayResult();
return 0;
}

