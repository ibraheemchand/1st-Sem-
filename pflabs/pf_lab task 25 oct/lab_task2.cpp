#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int randNum=rand() %10;
int num=1;

while (num)
{
    cout<<"guess number between 1-10 :";
    cin>>num;

    if (num<randNum)
    {
     cout<<"Too low, try again.";
    }
    else if (num>randNum)
    {
     cout<<"Too high, try again.";
    }
    else { cout<<"Congartualations ! , You guessed right";
    num=0;}
    
}


    return 0;
}