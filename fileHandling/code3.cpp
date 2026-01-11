#include <iostream>
#include <string>
#include <fstream>
using namespace std; 
struct Employ
{
    int empID;
    string name;
    char department;
    float salary;
};
int size = 100;

void addEmploy(Employ* emp){

    for (int i = 0; i < size; i++)
    {
        cout<<"Employ ID :"<<endl;
        cin>>(emp[i].empID);
        cout<<"Enter name :"<<endl;
        cin>>(emp[i].name);
        cout<<"Enter department :"<<endl;
        cin>>(emp[i].department);
        cout<<"Enter salary :"<<endl;
        cin>>(emp[i].salary);
    }
    

}

void DisplayEmploys(Employ* emp){

    for (int i = 0; i < size; i++)
    {
        cout<<"Employ no. :"<<i<<endl;
        cout<<"Employ ID :"<<emp[i].empID<<endl;
        cout<<"Name:"<<emp[i].name<<endl;
        cout<<"Department :"<<emp[i].department<<endl;
        cout<<"float :"<<emp[i].salary<<endl;

        cout<<endl;
        cout<<endl;
    }
}
void scearchEmploy(Employ* emp , int id ){

    for (int i = 0; i < size; i++)
    {
        if (emp[i].empID==id)
        {
             cout<<"Employ no. :"<<i<<endl;
        cout<<"Employ ID :"<<emp[i].empID<<endl;
        cout<<"Name:"<<emp[i].name<<endl;
        cout<<"Department :"<<emp[i].department<<endl;
        cout<<"float :"<<emp[i].salary<<endl;
        }
        
        
    }
    

}


void EditSalary(Employ* emp , int id){

     for (int i = 0; i < size; i++)
    {
        if (emp[i].empID==id)
        {
           cout<<"Enter This employ Salary";
           cin>>emp[i].salary;
        }
        
        
    }

}

int main(){

Employ empl[size];
Employ *emp= empl;
while (true)
{
   int a;
   cout<<"1) Add new employee\n2)Display all employees\n3)Search employee by ID\n4)Modify salary of an employee\n5)Exit"<<endl;
    cin>>a;
    if (a==1)
    {
        addEmploy(emp);
    }
    
    if (a==2)
    {
    DisplayEmploys(emp);
    }
    
    if (a==3)
    {   int id;
        cout<<"Enter Id"<<endl;
        cin>>id;
       scearchEmploy(emp,id);
    }
    
    if (a==4)
    {   int id;
        cout<<"Enter Id"<<endl;
        cin>>id;
       EditSalary(emp,id);
    }
    



    if (a==5)
    {
    break;
    
    }
    
}


}