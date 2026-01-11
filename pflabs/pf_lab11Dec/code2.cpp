#include <iostream>
#include <string>
using namespace std;
struct Employ
{  
   string name ;
   float num;
   int a[10];
};

void display(Employ* ptr){
cout<<ptr->num<<endl;
cout<<ptr->name<<endl;
cout<<&(ptr->num)<<endl;
cout<<&(ptr->name)<<endl;
    

}


int main (){

Employ x;
x.name="chand";
x.num=99.34;

// for (int i = 0; i < 10; i++)
// {
//     cout<<"enter arry number indx no. "<<i<<endl;
//     cin>>x.a[i];
// }




Employ* ptr1= &x;

display(ptr1);
    return 0;
}
