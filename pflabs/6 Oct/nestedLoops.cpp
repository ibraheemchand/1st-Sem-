#include <iostream>
using namespace std ;
int main (){
int l;
int nos; //Number of stars

cout<<"Enter Number of lines\n ";
cin>>l;
cout<<"Enter Number of stars in each line \n ";
cin>>nos;

    int j=1;
    for (int  i = 1; i < l; i++)
    {
       while (nos>j)
{
     cout<<"*";
     j++;
}
    }
    



return 0 ;

}