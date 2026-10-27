#include <iostream>
using namespace std;

int main() {
int a[5], sum;
cout << "Enter the values of array\n";

for(int i = 0; i <= 4; i++)
{
cin >> a[i];
}


for(int j = 0; j <= 4; j++)
{
sum = sum + a[j];
}

cout << "Addition of array = " << sum << endl;
return 0;
}
