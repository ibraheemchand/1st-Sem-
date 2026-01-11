#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;



int main (){
int a [30];
srand(time(0));
for (int i = 0; i < 30; i++)
{
    a[i]= rand()%100;
}
int mi=INT8_MAX;
int ma = INT8_MIN;
for (int i = 0; i < 30; i++)  
{
    
    if (ma>a[i])
    {
        ma=a[i];
    }
     
   
}
cout<<"The Minimum of arry is "<<ma<<endl;


for (int i = 0; i < 30; i++)
{
if (a[i]==ma)                       // minimun 
{
cout<<"The minimum number is stored at "<<a[i]<<"  location in arrys"<<endl;    
}

}

for (int i = 0; i < 30; i++)
{
    if (mi>a[i])
    {
        mi=a[i];               // max
    }
    
}
cout<<"The Maximum of arry is "<<mi<<endl;

cout<<endl;
bool check=1;
for (int i = 0; i < 30; i++)
{
   
if (a[i]==mi)                      
{
cout<<"The minimum number is stored at "<<a[i]<<"  location in arrys"<<endl;    
break;
check=0;
}
else
check=1;
}
if (check==0)
{
   cout<<"Foound";
}
else 
cout<<"not Foound";


    return 0 ;
}