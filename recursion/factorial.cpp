#include <iostream>
using namespace std ;

int factorial(int a){
if (a==1)
{
    return 1;
}
else
{a*=factorial(a-1);

    return a;}
}

int main(){

int a = 8;
cout<<factorial(a);

    return 0 ;
}