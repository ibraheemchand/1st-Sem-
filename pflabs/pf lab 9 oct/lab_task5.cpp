#include <iostream>
using namespace std ;
int main (){
int nbp , p ;  //Number of boooks perchased 
cout<<"Enter number of books purchased :";
cin>>nbp;

if (nbp==0)
{
   p=0;
}
else if (nbp==1)
{
    p=5;
}
else if (nbp==2)
{
    p=15;
}
else if (nbp==3)
{
    p=30;
}
else{p=60;}

cout<<"You purchased "<<nbp<<" books \n You got "<<p <<" points"<<endl;




    return 0 ;
}