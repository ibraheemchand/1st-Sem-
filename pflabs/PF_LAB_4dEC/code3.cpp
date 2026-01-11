#include <iostream>
using namespace std ;
int main(){
int a[9]={2,32,3,3,4,67,89,8};
int *ptr1 = a;
for (int i = 0; i < 9; i++)
{
    cout<<*(ptr1+i)<<endl;
}


return 0 ;
}