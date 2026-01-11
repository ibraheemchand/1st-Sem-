#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;
int scrch(a[], int ab ){
    bool is=1;

for (int i = 0; i < 30; i++)
{
    if (a[i]==ab)
    {
       is=1;
    }
    else is=0;
}


if (is==1)
{
    return cout<<"IS found";
}
else return  cout<<"IS not found";

    return;
}


int main (){
int a [30];
srand(time(0));
for (int i = 0; i < 30; i++)
{
    a[i]= rand()%100;
}
int ab;
cout<<"Enter a :"
cin>>ab
scrch(a,ab);
return 0;}
