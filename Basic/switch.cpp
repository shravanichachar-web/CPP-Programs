#include<iostream>
using namespace std;
int main()
{
int a, b, c;
cout << "Enter the choice:\n";
cin >> c;
cout << "Enter the values of a and b:\n";
cin >> a >> b;
switch(c)
{
case 1:
cout << "Addition of " << a <<" and " << b << ":" << a+b << endl;
break;
  
case 2:
cout << "Substraction of " << a <<" and " << b << ":" << a-b << endl;
break;
  
case 3:
cout << "Multiplication of "<< a <<" and "<< b << ":" <<a*b<<endl;
break;
  
case 4:
cout << "Division of " << a <<" and " << b << ":" << a/b << endl;
break;
  
default:
cout << "No choice found" << endl;
break;
}
return 0;
}
