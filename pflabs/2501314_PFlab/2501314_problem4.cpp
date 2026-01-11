#include <iostream>
using namespace std; 
int main(){
int i=0;
while (i<=100)
{
    if (i%2==0)
    {
        cout<<i<<"\t is divisible by 2 "<<endl;
    }

    if (i%3==0)
    {
        cout<<i<<"\t is divisible by 3 "<<endl;
    }
    if (i%7==0)
    {
        cout<<i<<"\t is divisible by 7 "<<endl;
    }
        
    i++;
}


    return 0 ;
}