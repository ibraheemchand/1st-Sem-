#include <iostream>
using namespace std ;
void change(int *ab ){
*ab=30;

    return; 
}


int main(){
int x = 28;
int *xy = &x;
int a = 823;
int *ab = &a;

cout<<"before swAP"<<endl;
cout<<*xy<<endl;
cout<<*ab<<endl;

swap(*xy , *ab);

cout<<"AFTER swAP"<<endl;
cout<<*xy<<endl;
cout<<*ab<<endl;

cout<<"changing value to 30 "<<endl;
change(&a);
cout<<"after changing value of a =  "<<a<<endl ;


return 0 ;




}