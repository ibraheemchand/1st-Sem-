#include <iostream>
#include <string>
using namespace std ;
int main(){

char a[]= "xxx" ;
char Target = 'a';
int size =3;
bool isFound = false;
for (int i = 0; i < size; i++)
{
    if (Target==a[i])
    {
        isFound=true;
    }
    
}
cout<<isFound;

}