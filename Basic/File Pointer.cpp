#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream fout("Hello.txt");
fout << "Hello World";
cout << "Write position : " << fout.tellp()endl;

fout.close();
ifstream fin("Hello.txt");
fin.seekg(6);
string word;
fin >> word;
cout << "Word after 6th byte :" << word << endl;
fin.close();
}



