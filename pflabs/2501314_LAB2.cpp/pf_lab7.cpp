#include <iostream>
#include <cstdlib>
using namespace std ;
int main(){

int minutes  =rand() % 60 ;
int second  =rand() % 60 ;
int hours =rand() % 12 ;
int am_pm =rand()%4;

cout<<"Hours : "<<hours;
if (am_pm<2)
{
   cout<<"PM";
}
else  cout<<"AM";
cout<<endl;
cout<<"minutes : "<<minutes<<endl;
cout<<"seconds : "<<second<<endl;
    return 0;
}