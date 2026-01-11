#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
int choice;
string b;

do
{
   cout<<"1) Add New record\n2)Add to current file\n3)View all Records\n4)exit\n"<<endl;    
   cin>>choice;
if (choice==1 || choice==2 || choice ==3 || choice==4)
{
    if (choice==1)
{
    fstream file;
cout<<"Enter ! What you wanna write\n";
cin>>b;
file.open("sample.txt", ios::out );
file<<b;
file.close();

}
else if (choice==2)
{
    fstream file;
cout<<"Enter ! What you wanna write\n";
cin>>b;
file.open("sample.txt", ios::app );
file<<b;
file.close();
}

else if (choice==3)
{
     string a; 
    ifstream in ;
    in.open ("sample.txt");
   while ( getline (in ,a))
   {
   cout<<a<<endl;
   cout<<".............."<<endl;
   }
   in.close();
}

else if (choice==4)
{
    cout<<"Exit successfull  !";
    choice=4;
}

else
{
cout<<"!invalid input ";
cout<<"Please enter 1 ,2 ,3,4";
}



 }} while (choice!=4);

    return 0 ;
}