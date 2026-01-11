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
int mi=INT8_MIN;
int ma = INT8_MAX;
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
cout<<"The minimum number is stored at "<<i<<"  location in arrys"<<endl;    
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





    return 0 ;
}