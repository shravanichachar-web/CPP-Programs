#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream fout("New_Document.txt");
fout << "Welcome to my new docuemnt";
string line;
fout.open("New_Document.txt");
while(fout){
getline(cin, line);
of(line == '1')
  break;
fout << line << endl;
}
fout.close();
ifstream fin;
fin.open("New_Document.txt");
while(getline(fin, line)){
cout << line << endl;
}
fin.close();
return 0;
}
