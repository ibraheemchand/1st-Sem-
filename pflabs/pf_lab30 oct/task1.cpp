#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Enter Num :";
cin>>num;
for (int i = 2; i < num; i++)
{
   bool primeCheck =1;

   for (int j = 2; j < i; j++)
   {
    if (i%j==0)
    {primeCheck=0;
    break;}
    
   }
   
    if (primeCheck==1)
    {
        cout<<i<<" is a prime no.\n";
    }
    


    
}

return 0 ;}