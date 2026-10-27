#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream  fout("Hello.txt",ios::app);
fout << "\nNew Entry Added!" << endl;
fout.close();
return 0;
}
