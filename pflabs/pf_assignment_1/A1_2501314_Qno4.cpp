#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int main(){
int failures=0 , passed=0 ;
srand(time(0));
for (int i = 1; i <= 100; i++)
{  fstream randomfile ,file ; 
randomfile.open("random.txt",ios::app);
    int a = (rand() %100)+1;
    randomfile<<a<<endl;
    
    randomfile.close();
    
    if (a<50)
    {
      file.open("failed.txt",ios::app);
        file<<a<<endl;
        failures++;
        file.close();
    }
    else if (a>=50)
    {
       file.open("passed.txt",ios::app);
        file<<a<<endl; 
       passed++;
        file.close();
    }
    
}


cout<<"Writing done !"<<endl;
cout<<"No. of failures are\t"<<failures<<endl;
cout<<"No. of passed are\t"<<passed<<endl;


    return 0;
}