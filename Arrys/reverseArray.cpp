#include <iostream>
using namespace std ;
int main(){
int size =10;
int a[size]={4,3,2,1,0,9,8,7,6,5};

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}
cout<<endl;
cout<<endl;
cout<<endl;
int first=0 , last=size-1;

while (first<last)
{
   swap(a[first],a[last]);
   first++;
   last--;
}


for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}
cout<<endl;
cout<<endl;
cout<<endl;
int maxNum=0;
for (int i = 0; i < size; i++)
{
    if (maxNum<a[i])
    {
        maxNum=a[i];
    }
    
}
int secMax=0;
for (int i = 0; i < size; i++)
{
    if (secMax<a[i] && (maxNum!=a[i]))
    {
        secMax=a[i];
    }
    
}
cout<<"The Second Max Number is :"<<secMax;
    return 0 ;

}