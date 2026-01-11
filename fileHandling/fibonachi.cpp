#include <iostream>
using namespace std;
int main(){
int n=10;
int first=0, sec=1, sum=0;
for (int i = 0; i < n ; i++)
{
    cout<<first<<",";
    // // 0 , 1 , 1
    // cout<<sec<<",";
   
    
    sum=first+sec;
    first=sec;
    sec=sum;
    
}


}