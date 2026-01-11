#include <iostream>
using namespace std ;
int main (){
int a ,b,c;
char op ;
cout<<"Enter 1st Number :";
cin>>a;
cout<<"Enter operation :";
cin>>op;
cout<<"Enter 2st Number :";
cin>>b;
switch (op)
{
    case '+':
        cout<<"Th  "<<op<<" of  both numbers is" <<a+b;
        break;
    case'-':
        cout<<"The  "<<op<<" of  both numbers is" <<a-b;
        break;
    case '*':
        cout<<"The  "<<op<<" of  both numbers is" <<a*b;
         break;
    case  '/':
        if(a==0  && b==0){
            cout<<"MATH Error!. Division by zero is not possible\n ";
            break;}
        else{cout<<"The  "<<op<<"  of  both numbers is" <<a/b;
            break ;}
        
    case '%':
        if(a==0  || b==0) 
            {cout<<"MATH Error!. Modulus of zero is not possible\n ";
            break;}
        else{cout<<"The  "<<op<<"  of  both numbers is" <<a%b;
            break ;}
    default :
    cout<<"Invalid operation : please enter +  -  *  /  \n";       
}    
 return 0 ;}
        