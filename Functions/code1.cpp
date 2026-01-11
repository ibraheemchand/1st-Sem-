#include <iostream>
using namespace std;

int factorial(int n){
int fact;
if (n==1)
{
    return 1 ;
}
else fact = n * factorial(n-1);
}


int main (){
int n;
cout<<"Enter Number : ";
cin>>n;
cout<<"The factorail is "<<factorial(n);

    return 0 ;
}