#include <iostream>
#include <string>
using namespace std ;

struct date
{
    int date;
    int month;
    int year;
};

typedef struct Employ{}
{
   int STD[50];
   string name ;
   float gpa ;
   date join;
} e;


int main (){



e chand ;



cout<<chand.gpa<<endl;
cout<<chand.STD<<endl;
cout<<chand.name<<endl;



cout<<endl;
cout<<endl;
cout<<&chand<<endl;
cout<<sizeof chand<<endl;

    return 0 ;

}
