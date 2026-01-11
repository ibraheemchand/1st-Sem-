#include <iostream>
using namespace std;
int powerFunc(int base , int exp){
int ans=1 ;
for (int i = 0; i < exp; i++)
{
    ans *=base; 
}
return ans ;
}




int main(){
    int base , exp ;

cout<<"Enter base : ";
cin>>base;

cout<<"Enter exponent : ";
cin>>exp;

cout<<base<<"^"<<exp<<" = "<<powerFunc(base , exp)<<endl;

    return 0 ;
}