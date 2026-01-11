#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
    double  quantity , price=0 ;
   int selection=1 ;
    fstream file;
    file.open("Test.txt",ios::out);
   cout<<setw(20)<<"Item No."<<setw(20)<<"Item Name"<<setw(20)<<"Price"<<endl;
   cout<<setw(20)<<"1"<<setw(20)<<"Washing Powder"<<setw(20)<<"180"<<endl;
   cout<<setw(20)<<"2"<<setw(20)<<"Soap"<<setw(20)<<"40"<<endl;
   cout<<setw(20)<<"3"<<setw(20)<<"Shampoo"<<setw(20)<<"34.5"<<endl;
   cout<<setw(20)<<"4"<<setw(20)<<"Cooking Oil"<<setw(20)<<"16.5"<<endl;
   cout<<setw(20)<<"5"<<setw(20)<<"Sugar"<<setw(20)<<"96"<<endl;
   cout<<"To get total bill press any other key then 1-5"<<endl;
while (selection>0 && selection<6)
{
      cout<<"Select Item : "; 
       cin>>selection;
    if (!(selection>0 && selection<6))
    {
        break;
    }
    else{

    cout<<"Enter Quantity : ";
    cin>>quantity;
    switch (selection)
    {
     
    case 3:
        {price=price + (34.5*quantity);
    case 1:
        {price=price + (180*quantity);
        break;}
    case 2:
        {price=price + (40*quantity);
        break;}
    case 4:
        {price=price + (16.5*quantity);
        break;}
    case 5:
        {price=price + (96*quantity);
        break;}
    
    default:
        break;
    }}
    
}

    cout<<"The total bill is : "<<price<<endl;
    file<<"The total bill is : "<<price<<endl;
    file.close();
    return 0 ;
}}