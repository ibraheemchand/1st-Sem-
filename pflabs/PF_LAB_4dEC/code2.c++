#include <iostream>
using namespace std ;
int main(){
int a[]={2,32,3,3,4,67,89,8};
int b[100]={a[2]=2,a[99]=99};
int x = 23;
int* ptr1 = a;
int **ptr2 = &ptr1;


cout<<"Address of a "<<(ptr1)<<endl;
cout<<"Address of a "<<*(ptr1+1);
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"Address of a "<<*(ptr1+1);



// when we subrtract 
cout<<"subtraction of ptrsss   = "<< (ptr1)-(*ptr2);

}