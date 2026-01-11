#include <iostream>
using namespace std ;

int main(){
int size =4;
int a[4]={1,2,3,4};
int aSqu[4];
int lol;
for (int i = 0; i < size; i++)
{
    
    aSqu[i]=(a[i]*a[i]);
}
cout<<"before reversing"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<aSqu[i]<<endl;

}


for (int  first = 0 , last =size-1 ; first  < last ; first++ , last--)
{
    swap(aSqu[first], aSqu[last]);
}

cout<<"after reversing"<<endl;

for (int i = 0; i < size; i++)
{
    cout<<aSqu[i]<<endl;

}


    return 5;
}