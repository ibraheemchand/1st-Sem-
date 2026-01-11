#include <iostream>
using namespace std;
void sortArry(int a[] , int size ){

for (int i = 0; i < size-1; i++)
{
    for (int j = 0; j < size - i - 1 ; j++)
    {
        if (a[j+1]<a[j])
        {
            swap(a[j+1] , a[j]);
        }
        
    }
    
}

return;



}

void printArray(int a[] , int size){
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<"  ";
}
cout<<endl;
}



int main(){
int size =5;
int a[5]={4,2,5,3,1};
sortArry(a, size);
printArray(a, size);

    return 0 ;
}