#include <iostream>
using namespace std;
int main(){

int size =5;
int a[size];
for (int i = 0; i < size ; i++)
{
    cout<<"Enter value for array A and index "<<i<<endl;
    cin>>a[i];

}

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}


    return 0 ;
}