#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a , b, c , discriminenet;
cout<<"Enter a (the coefficient of x^2)\n";
cin>>a;
if (a!=0)
{
    cout<<"Enter b (the coefficient of x)\n";         
cin>>b;
cout<<"Enter c (the constant term)\n";
cin>>c;
discriminenet = (b*b)-4*a*c;


if (discriminenet<0)
{
    cout<<"the equation has two complex roots."<<endl;
}
else if (discriminenet==0)
{
    cout<<"then the equation has a single (repeated) root."<<endl;
}
else if (discriminenet>0)
{
   cout<<" the equation has two real roots."<<endl;
}

if (discriminenet>=0)
{
    cout<<"roots of eq are\t"<<((-b)-sqrt(discriminenet))/(2*a)<<"\tand\t"<<((-b)+sqrt(discriminenet))/(2*a);
}

}
else {cout<<"As a is zero equation is not quardratic ";}


    return 0 ;
}