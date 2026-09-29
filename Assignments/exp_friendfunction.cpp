#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend int add(Number n);
};

int add(Number n)
{
    return n.a + n.b;
}

int main()
{
    Number n;

    n.getData();

    cout << "Sum = " << add(n) << endl;

    return 0;
}