#include <iostream>
using namespace std ;
int main (){
float amount,min,Exmin ;
int a,pkg;
cout<<"Enter minutes consumed :";
cin>>min;


cout<<"Select Your package\n1) Pakage A\n2) Pakage B\n3) pakage C";
cin>>pkg;
{
if (pkg==1 || pkg==2 || pkg == 3)
{
    switch (pkg)
{
case 1 :
   if (min<=450)
   {
    amount=39.99;}
  else if (min>450)
  {
    Exmin=min-450;
    amount=39.99+(Exmin*0.45);
  }
  
   
    break;
case 2:
  if (min<=900)
   {
    amount=59.99;}
  else if (min>900)
  {
    Exmin=min-900;
    amount=59.99+(Exmin*0.4);
  }
  break;

  

default:{ 
    {amount=79.99;
    break;}
}
    }}

else {
    cout<<"Invalid input! please select 1 , 2 and 3";
}
cout<<"Your monthly bill is "<<amount;
    return 0 ;

}}