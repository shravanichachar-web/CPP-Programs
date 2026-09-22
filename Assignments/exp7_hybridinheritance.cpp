#include <iostream>
using namespace std;

class Person {
protected:
string name;

public:
void getName() {
cout << "Enter name: ";
cin >> name;
}
};

class Student: virtual public Person {
protected:
int academicMarks;

public:
void getAcademicMarks() {
cout << "Enter academic marks: ";
cin >> academicMarks;
}
};

class Sports : virtual public Person {
protected:
int sportsMarks;

public:
void getSportsMarks() {
cout << "Enter sports marks: ";
cin >> sportsMarks;
}
};

class Result : public Student, public Sports {
public:
void display() {
cout << "\n---- Result ---" << endl;
cout << "Name: " << name << endl;
cout << "Academic Marks: " << academicMarks << endl;
cout << "Sports Marks: " << sportsMarks << endl;

cout << "Total: " << academicMarks + sportsMarks << endl;
}
};

int main() {
Result r;

r.getName();
r.getAcademicMarks();
r.getSportsMarks();

r.display();

return 0;
}

