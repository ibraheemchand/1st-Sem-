#include <iostream>
#include <fstream>
using namespace std ;
int main(){

int n;
cout<<"Enter number ";
cin>>n;
fstream file;
file.open("tempStorage.txt",ios::out);
file.close();
file.open("tempStorage.txt",ios::app);
for (int i = 1 ; i < n; i++)
{
    if (n%i==0)
    {
      file<<i<<endl;
    }
 
}
file.close();

int sum = 0, x;
file.open("tempStorage.txt",ios::in);
while (file>>x)
{
    sum+=x;
}
file.close();
if (sum==n)
{
    cout<<n<< " is a perfect number. ";
}
else{
    cout<<n<<" is not a perfect number.";
}
    return 0 ;
}