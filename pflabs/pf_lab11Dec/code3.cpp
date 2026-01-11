#include <iostream>
#include <string>
using namespace std;
struct Employ
{  
   string name ;
   float num;
   
};

void display(Employ* ptr){

    for (int i = 0; i < 3; i++)
    {
        cout<<"enter arry number indx no. "<<i<<"  name is  "<<(ptr->name) <<endl;
        cout<<"enter arry number indx no. "<<i<<"  number is  "<<(ptr->num) <<endl;
    }
    cout<<endl;
    cout<<"address of name"<<&(ptr->name)<<endl;
    cout<<"address of number"<<&(ptr->num)<<endl;

}


int main (){

Employ x[3];


for (int i = 0; i < 3; i++)
{
    cout<<"enter arry number indx no. "<<i<<"   name"<<endl;
    cin>>x->name;
    cout<<"enter arry number indx no. "<<i<<"  num"<<endl;
    cin>>x->num;
}




Employ* ptr1= x;

display(ptr1);
    return 0;
}
