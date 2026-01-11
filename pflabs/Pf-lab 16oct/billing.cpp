#include <iostream>
using namespace std ;
int main(){
int custCat;
int itemType;
int origPrice,finalPrice;
cout<<"Enter Orignal price\n";
cin>>origPrice;
cout<<"Enter customar Type\n1)\tRegular\n2)\tMember\n3)\tPremium\n";
cin>>custCat;
cout<<"Enter item Type\n1)\tMobiles\n2)\tLaptops\n3)\tAssories\n";
cin>>itemType;
if ((custCat==1 || custCat==2 || custCat==3 )&&(itemType==1 || itemType==2 || itemType==3))
{
    switch (itemType)
{
case 1:
  { cout<<"You got 5% off on mobiles\n";
finalPrice= origPrice - (origPrice*0.05);}
    break;
case 2:
  { cout<<"You got 10% off on laptop\n";
finalPrice= origPrice - (origPrice*0.10);}
    break;
default: { cout<<"You got 10% off Assesories\n";
finalPrice= origPrice -(origPrice*0.10);
    break;}
}
if (custCat==1)
{
    finalPrice= finalPrice-(origPrice*0.05);
    cout<<"You got 5% off as a Regular customer\n";
}
else if (custCat==2)
{
     finalPrice= finalPrice-(origPrice*0.10);
      cout<<"You got 10% off as a Member customer\n";
}
else if (custCat==3)
{
     finalPrice= finalPrice-(origPrice*0.15);
      cout<<"You got 15% off as a Premium customer\n";
}
 
cout<<"Orignal Price is"<<origPrice<<"\n"<<"After discount\n";
cout<<"final Price is "<<finalPrice;
}

else
cout<<"Invalid input please input in (1,2,3)";
    return 0 ;
}