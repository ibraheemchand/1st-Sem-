#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;
int main (){
int a [30];
srand(time(0));

for (int i = 0; i < 30; i++)
{
    a[i]= rand()%10;
}
int size ;
size = (sizeof a)/sizeof size;
cout<< "The size is :"<<size ;
int sum=0;

for (int i = 0; i < 39; i++)
{
    sum+=a[i];
}
cout<<"\n";
cout<<"The sum is : "<<sum<<endl;

cout<<endl;
cout<<endl;
cout<<endl;


int ab=0;
for (int i = 0; i < 30; i++)
{
   if ((a[i])>ab)
   {
    ab=a[i];
   }
   
}
cout<<"The highest in the arry is :"<< ab ;


cout<<endl;
cout<<endl;
cout<<endl;




int maxValue =a[0];
for (int i = 0; i < 30; i++)
{
    if (a[i]<maxValue)
    {
        maxValue=a[i];

    }
    
}


cout<<"The Smallest value in the code is : "<<maxValue;

    return 0 ;
}