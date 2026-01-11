#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    file.open("bank.txt",ios::out);
double startBal,amountDeposited,amountWidhrawl,netDeposit;
double AnualintRate;
int totalInterstEarned=0,numOfMonths;
cout<<"Enter Starting Balance :";
cin>>startBal; file<<"starting Balance\t"<<startBal<<endl;
cout<<"Enter Annual intersert Rate :";
cin>>AnualintRate; file<<"Annual interst Rate :\t"<<AnualintRate<<endl;
float monthlyInterstRate =(AnualintRate/12);
cout<<"Enter no. of months passes the account was established :";
cin>>numOfMonths; file<<"No. of Months :\t"<<numOfMonths<<endl;
netDeposit=startBal;

for (int i = 0; i < numOfMonths; i++)
{
    cout<<"Enter Amount deposited : ";
    cin>>amountDeposited;file<<"amount deposited\t"<<amountDeposited<<endl;
    if (amountDeposited>=0)
    {
         cout<<"Enter Amount Widhrawl : ";
         cin>>amountWidhrawl;file<<"amount widhrawl\t"<<amountWidhrawl<<endl;
        if (amountWidhrawl>=0)
        {
             netDeposit=netDeposit+((amountDeposited-amountWidhrawl)*(monthlyInterstRate/100));
            totalInterstEarned=totalInterstEarned+((netDeposit*(monthlyInterstRate/100))-netDeposit);
            cout<<"Total deposits "<< amountDeposited <<"\t"<<"Total widhrawl "<< amountWidhrawl<<"\tNet deposit "<<netDeposit <<endl;
            file<<"Total deposits "<< amountDeposited <<endl<<"\t"<<"Total widhrawl "<< amountWidhrawl<<endl<<"\tNet deposit "<<netDeposit <<endl;
        }
        
        
    }
    else cout<<"!invalid input write only positive values";
   
   
}
file.close();

    return 0 ;
}