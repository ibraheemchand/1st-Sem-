#include <iostream>
using namespace std;
int main (){

int size = 5 ;
int a[size] = {10, 20, 30, 40, 50} ;


for (int i = 0 ; i < size-1 ; i++ ){

    for(int j = 0 ; j < size-i-1 ; j++ ){
        if(a[j]<a[j+1]){
            swap(a[j] , a[j+1]);

        }
     
    }
    
      
 }
    
for (int i = 0 ; i < size ; i++ ){

cout<<a[i]<<" ";

}
 
 return 0 ;
}