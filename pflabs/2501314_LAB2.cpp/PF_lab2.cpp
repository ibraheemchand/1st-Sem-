#include <iostream>
using namespace std ;
int main(){
float a;
float b;
float c;
float d,e;

cout<<"Enter a:\n";
cin>>a;
cout<<"Enter b:\n";
cin>>b;
cout<<"Enter c:\n";
cin>>c;
cout<<"Enter d:\n";
cin>>d;
cout<<"Enter e:\n";
cin>>e;

cout<<a/b+c*d-e<<endl;
cout<<a/(b+c)*(d-e)<<endl;
    return 0 ;
}