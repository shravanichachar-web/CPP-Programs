#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream fout("example2.txt");
fout<<"Welcome to file handling";
fout.close();

ifstream fin("example2.txt");
string line;
getline(fin,line);
cout<<line;
fin.close();
}
