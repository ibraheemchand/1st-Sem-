#include <iostream>
using namespace std;

void swapFunction(int &k , int &j){
int tempStore;
tempStore=j;
j=k;
k=tempStore;

}



int main(){
    int a , b;
cout<<"Enter a : ";
cin>>a;
cout<<"Enter b : ";
cin>>b;

     cout << "Before swapping:\n";
    cout<<"a = "<<a<<"\n"<<"b = "<<b<<endl;

    swapFunction(a , b );

    cout << "after swapping:\n";
    cout<<"a = "<<a<<"\n"<<"b = "<<b<<endl;
    return 0;

}