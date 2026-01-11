#include <iostream>
using namespace std;
void printArray(int a[] , int size ){

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
    a[i]+=1;
}
return;

}



int main(){

int size = 6 ;
int a[size]={5,5,7,6,7,4};

printArray( a, size);
cout<<endl;
cout<<endl;
cout<<endl;

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}



}