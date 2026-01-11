#include <iostream>
using namespace std;

double factorial(double n){
double fact;

    if(n==1){return 1;}
    else if (n==0)
    {
       return 1;
    }
    
    else{
       fact= n*factorial(n-1);
        return fact;
    }


}

int facto(int n ){
    int f;
     if(n==1){return 1;}
    else if (n==0)
    {
       return 1;
    }
    else
    f = n* facto(n-1);
    return f;
}


int main(){
 double n;
    cout<<"Enter n";
    cin>>n;
    
    cout<<facto(n);


    return 0 ;
}