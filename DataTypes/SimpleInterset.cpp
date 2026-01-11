#include <iostream>
using namespace std ;
int main(){
float p ; //principal amount 
float time ;
float rate ; // rate of interest 
cout<<"Enter Principal amount:";
cin>>p;
cout<<"Enter time :";
cin>>time;
cout<<"Enter rate :";
cin>>rate;

double simple_interest;
simple_interest = (p*time*rate)/100;
cout<< simple_interest << endl;
return 0 ;
}
