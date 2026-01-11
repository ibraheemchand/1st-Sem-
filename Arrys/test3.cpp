#include <iostream>
using namespace std;
int main(){
    int size =5;
int a[]= {321,2345,4,876 ,54};
int trash=0, sum=0 ;
for (int i = 0; i < size; i++)
{
int n = a[i];

while (n>=10)
{
    n/=10;
}

sum+=n;

}
cout<<"the sum is = "<<sum<<endl;

    return 0 ;
}