#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string a;
 fstream fie ;
 fie.open("school.txt",ios::in);

 while (getline(fie,a))
 {
  cout<<a<<endl;
 }
 
fie.close();
return 0;}