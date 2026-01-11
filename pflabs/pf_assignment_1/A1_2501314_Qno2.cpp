#include <iostream>
using namespace std;
int main(){

int month;
cout<<"Enter Month : ";
cin>>month;
if (month>=1 && month<=12 )
{
    switch (month)
    {
    case (10):
    case(4):
    case(6):
    case(11):
       {cout<<"30 days";
        break;}
    case (2):
    {
        cout<<"28 days";
        break;
    }

    default:
    cout<<"31 days";
        break;
    }
}
else
cout<<"!invalid input , Enter number between 1-12";




return 0 ;
}