#include <iostream>
using namespace std;
int main (){
long num,factorial;
cout<<"Enter  number : ";
cin>>num;
factorial=1;
if (num>=1)
{
 
while (num>=1)
{
factorial=factorial*num;
   num--;
}
cout<<"factorial = "<<factorial<<endl;
}

else
cout<<"!invalid input";

    return 0;

}