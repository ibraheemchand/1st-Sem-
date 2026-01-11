#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string a; 
fstream file;
file.open("sample.txt",ios::app);
file<<"Name : Ibraheem\tChand\nRoll No.\t 250198314";

cout<<"Writing Done...!";
file.close();


file.open("sample.txt",ios::in);
while (getline(file,a))
{
  cout<<a;
}

    return 0 ;
}
