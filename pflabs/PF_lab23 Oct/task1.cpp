#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string a; 
    ifstream in ;
    in.open ("sample.txt");
   while ( getline (in ,a))
   {
   cout<<a<<endl;
   }
   

cout<<".........reading done.........";

 in.close();
    return 0 ;
}
