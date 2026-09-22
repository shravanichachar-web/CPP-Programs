#include <iostream>
using namespace std;

class Student {
protected:
int academicMarks;

public:
void getAcademicMarks() {
cout << "Enter academic marks: ";
cin >> academicMarks;
}
};

class Sports {
protected:
int sportsMarks;

public:
void getSportsMarks()
{
cout << "Enter sports marks: ";
cin >> sportsMarks;
}
};

class Result : public Student, public Sports {
public:
void display() {
cout << "\n---- Result ---" << endl;
cout << "Academic Marks: " << academicMarks << endl;
cout << "Sports Marks: " << sportsMarks << endl;
cout << "Total Marks: " << academicMarks + sportsMarks << endl;
}
};

int main() {
Result r;

r.getAcademicMarks();
r.getSportsMarks();
r.display();
return 0;
}
