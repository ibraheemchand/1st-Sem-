#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Enter number :";
cin>>num;


    for (int i = 0; i < num; i++)
    {
        cout<<"Multiply Table of "<<i<<endl;

        for (int j = 0; j < num; j++)
        {
            cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
        }
        



    }
    



    return 0;
}