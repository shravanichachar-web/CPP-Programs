#include<bits/stdc++.h>
using namespace std;

class Complex {
public:
int real;
int imaginary;
Complex()
{
//initial values are zero
real = 0;
imaginary = 0;
}
Complex(int r, int i)

{
real = r;
imaginary = i;
}
Complex addComplexNumber(Complex C1, Complex C2)
{
Complex res;

res.real = C1.real + C2.real;

res.imaginary = C1.imaginary + C2.imaginary;

return res;
}
};

int main()
{
Complex C1(4, 5);

cout << "Complex Number 1:" << C1.real << "+i" << C1.imaginary << endl;

Complex C2(8, 9);

cout << "Complex Number 2:" << C2.real << "+i" << C2.imaginary << endl;

Complex C3;

C3 = C3.addComplexNumber(C1, C2);

cout << "Sum of complex number:"<<C3.real<<"+i"<< C3.imaginary << endl;


Complex A(2, 7);

cout << "Complex number 1:" << A.real << "+i" << A.imaginary << endl;

Complex B(10, 6);

cout << "Complex number 2:" << B.real << "+i" << B.imaginary << endl;

Complex C;

C = C.addComplexNumber(A, B);

cout << "Sum of complex number:" << C.real << "+i" << C.imaginary;
}
