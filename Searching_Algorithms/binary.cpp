#include <iostream>
using namespace std ;

int BinaySerach(int a[] , int target , int size){
int start= 0;
int end = size-1;
int mid = (start+end)/2;


while(start<=end)
{
    mid = (start+end)/2;
    if (target<a[mid])
    {
    
        end=mid-1;

    }

    else if (target>a[mid])
    {
    
        start= mid+1;
    }

    else if (target==a[mid])
    {
        
        return mid;
    }
   
}
    return-1;


}



int main (){
    int size = 7;
int a[size] = {-1, 0, 3, 4, 5, 9, 12};
int target = 3;

cout<<BinaySerach(a , target, size);


}