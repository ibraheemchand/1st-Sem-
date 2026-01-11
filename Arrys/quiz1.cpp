#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main(){
    int a[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        a[i]=rand()%5;
    }
    int repertetion=0;
    for (int i = 0; i < 10; i++)
    {  repertetion=0;
       for (int j = i+1; j < 10; j++)
       {
            
           if (a[i]==a[j])
           {
               repertetion++;
           }
           
       }
       cout<<a[i]<<" Repertetion : "<<repertetion<<endl;
    }

    return 0 ;
}