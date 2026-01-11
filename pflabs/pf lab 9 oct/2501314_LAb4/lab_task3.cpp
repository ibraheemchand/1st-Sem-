#include <iostream>
using namespace std ;
int main (){

int day , month , year ;
cout<<"Enter Day :";
cin>>day;
cout<<"Enter Month :";
cin>>month;
cout<<"Enter Year :(2-digits)";
cin>>year;

if (day*month==year)
{
    cout<<"Your date is magic";
}
else
 cout<<"Your date is not magic";

    return 0;
}