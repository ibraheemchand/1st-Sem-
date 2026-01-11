#include <iostream>
using namespace std;
int main(){
int num1 ,num2 ,a ;
int hcf;
cout<<"Enter the 1st number  :";
cin>>num1;
cout<<"Enter the 2nd number  :";
cin>>num2;

for (int i = 1; i <= num1 && i<=num2 ; i++)
{
    if (num1%i==0 && num2%i==0)
    {
        hcf=i;
    }
    
}
cout<<"HCF is "<<hcf;

    return 0 ;
}