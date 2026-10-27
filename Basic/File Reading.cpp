#include<iostream>
#include<fstream>
using namespace std;
int main() {
ofstream fout("example.txt");
fout << "Welcome to file handling in c++";
fout.close();
ifstream fin("example.txt");
string line;
getline(fin,line);
cout << line;
fin.close();
}
