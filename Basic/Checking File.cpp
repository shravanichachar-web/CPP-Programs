#include <iostream>
#include <fstream>
using namespace std;
int main(){
ifstream fin("myfile.txt");
if(!fin){
cout << "file not found!" << endl;
return 1;
}
cout << "file opened successfully." << endl;
fin.close();
return 0;
}
