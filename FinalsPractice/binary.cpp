#include <iostream>
using namespace std;
int Binary(int a[] , int size ,int target){
    int mid=0;
    int first = 0;
    int last = size-1;
    for(int i =0 ; i<size ; i++){
        mid=(first +last )/2;
        if(target==a[mid]){
            return mid;
        }
        else if(target>a[mid]){
            first = mid +1 ;
        }
        else if(target<a[mid]){
            last = mid -1 ;
        }

    }

}

int main (){
int size = 5;
int a[5] = {10, 20, 30, 40, 50} ;
int target = 50;

cout<<"IT is at "<<Binary(a , size , target )<<endl;



 return 0 ;
}