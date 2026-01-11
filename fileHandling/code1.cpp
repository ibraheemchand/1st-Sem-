#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string a;
fstream file;
file.open("hyper.txt", ios::app);
file<<"Hello bhai sahab";
file.close();
cout<<"Writing Done !"<<endl;

file.open("hyper.txt", ios::in);
while (getline(file, a))
{
    cout<<a<<endl;
}
file.close();




}