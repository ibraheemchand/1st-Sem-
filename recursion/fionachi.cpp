#include <iostream>
using namespace std ;

int fib(int a){
if (a==1)
{
    return 0;
}
if (a == 2 )
{
    return 1;
}
if (a == 0)
{
    return 0;
}


return fib(a-1)+fib(a-2);




}
int main(){
int a = 5;
cout<<fib(a)<<endl;


    return 2;
}