#include <iostream>
#include <fstream>
using namespace std;
int main(){
int first=0, n , second=1 ,next,i=1;
cout<<"Enter number term in fbonachi series\t";
cin>>n;
cout<<"fibonachi series :";

fstream file;
file.open("fib series.txt",ios::out);
file<<"fibonachi series :";
do
{
    cout<<first;
    file<<first;
    next=first+second;
  
    first=second;
    second=next;
    i++;


    
} while (i<=n);



    return 0;
}