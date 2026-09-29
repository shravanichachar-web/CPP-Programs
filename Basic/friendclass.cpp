#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    float marks;

public:
    Student(string n, float m)
    {
        name = n;
        marks = m;
    }

    
    friend class Result;
};

class Result
{
public:
    void displayResult(Student s)
    {
        cout << "Student Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main()
{
    Student s1("Shravani", 89);

    Result r;

    r.displayResult(s1);

    return 0;
}