#include <iostream>
#include <cstdlib>

using namespace std ;
int main (){

int x=rand() % 10 ;
int y=rand() % 10 ;
int z=rand() % 10 ;

   int E1 = (x*x*x) + (y*y*y) + (z*z*z) - (3*x*y*z);
    int E2 = (x+y+z)*((x*x) + (y*y) + (z*z) - (x*y) - (y*z) - (x*z));
    

    cout << "Equation 1 = " << E1 << endl;
    cout << "Equation 2 = " << E2 << endl;


    if (E1==E2)
    {
        cout<<"Both equations are  equal";
    }
    else cout<<"Both equations are not equal";

    return 0;
}