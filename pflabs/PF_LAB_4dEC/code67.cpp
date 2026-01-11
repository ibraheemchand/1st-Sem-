#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;
int addArry(int *a, int  size)
{
int sum =0 ;
for (int i = 0; i < size; i++)
{
    sum+=*(a+i);
}
return sum;

}


int main(){
int size = 30;
int a[size];


for (int i = 0; i < size; i++)
{
    srand(time(0));
    a[i]=rand();
}
int *ptrarr = a;

cout<<addArry( a , size );

}