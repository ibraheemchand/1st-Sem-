#include <iostream>
using namespace std ;
int main (){
int n;
cout<<"Enter n ";
cin>>n;
bool isPrime = true ;

{for (int i = 2; n>i ; i++)

    if (n%i==0){
  isPrime= false ;
    break;}}


    if (isPrime == true ){
 cout<<"The number is prime";}
    else  cout<<"The number is not prime";


return 0 ;

}