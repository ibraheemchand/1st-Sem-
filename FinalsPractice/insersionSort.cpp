#include <iostream>
using namespace std;
int main(){int temp=0;
int a[5] = {4,1,5,2,3} ;
for(int i =1; i<5 ;i++){
temp=a[i];
int j=i-1;
while(j>=0 && a[j]>temp){
a[j+1]=a[j];
    j--;}
a[j + 1] = temp;

}

 
for(int i =0; i<5 ;i++){
cout<<a[i]<<" ";

}
return 0 ;
}