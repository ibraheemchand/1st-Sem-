#include <iostream>
using namespace std;
int main(){
int num=123,sum;
float avg;
int even = 0;
int odd = 0 ;
sum=0;
float i=0.00;

while (num!=0)
{
cout<<"Enter number\n";
cin>>num;
sum=sum+num;
i++;
if (num%2==0 && num!=0)
{
    even++;
}
else if (num!=0)
 odd++;

}
cout<<"Sum = "<<sum<<endl;
i=i-1;
avg=sum/i;
cout<<"Average = "<<avg<<endl;

cout<<"even numbers entered "<<even<<endl;
cout<<"odd numbers entered "<<odd<<endl;


    return 0;
}