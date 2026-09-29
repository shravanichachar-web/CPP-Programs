#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void getData()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    friend class Result;
};

class Result
{
public:
    void display(Student s)
    {
        cout << "Student marks = " << s.marks << endl;

        if (s.marks >= 40)
            cout << "Result = Pass" << endl;
        else
            cout << "Result = Fail" << endl;
    }
};

int main()
{
    Student s;
    Result r;

    s.getData();
    r.display(s);

    return 0;
}