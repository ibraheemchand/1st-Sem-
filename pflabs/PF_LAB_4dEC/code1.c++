#include <iostream>
using namespace std ;
int main(){
double a = -32.34f;
double *ptr1 = &a;
char ad= ' J ';
double **ptr2 = &ptr1;
cout<<a<<endl;cout<<&a<<endl;
cout<<"ptr1 KI VALUE  "<<ptr1<<endl;
char *ptrAd = &ad;
cout<<"ptr ad address"<<ptrAd<<endl;

cout<<endl;
cout<<endl;

cout<<ptr2<<endl;
cout<<"ptr2 KI VALUE   "<<**ptr2<<endl;
cout<<"size of a "<<sizeof ptr2<<endl;



**ptr2=21.34;
cout<<a;




 

    return 0 ;
}