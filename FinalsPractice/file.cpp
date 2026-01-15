#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
   string a;
    string b = "";

fstream file;
file.open("Binary.cpp", ios::in);
while(getline(file, a)){
   b+=a+"\n";
}
file.close();



file.open("Hyper.cpp",ios::app);
file<< b;
cout<<"!Written Successfull ";
file.close();

    return 0 ;
}