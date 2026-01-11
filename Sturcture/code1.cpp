#include <iostream>
using namespace std ;

typedef struct people
{
   int salary;
   string name ;
   float gpa ;
} p;


int main (){



p chand ;

chand.gpa=3.99;
chand.name="ibraheem";
chand.salary=1000000;

cout<<chand.gpa<<endl;
cout<<chand.salary<<endl;
cout<<chand.name<<endl;

cout<<endl;
cout<<endl;
cout<<&chand<<endl;
cout<<sizeof chand<<endl;

    return 0 ;

}
