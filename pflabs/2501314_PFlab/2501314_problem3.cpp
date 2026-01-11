#include <iostream>
using namespace std;
int main(){
int n;
int sum=0;
for (int i = 2; i <= 500 ; i++)
{
    if (i%2==0)
    {
       sum+=i;
    }
    
}

cout<<"The sum of even no. till 500 is : "<<sum<<endl;
 

    return 0 ;
}