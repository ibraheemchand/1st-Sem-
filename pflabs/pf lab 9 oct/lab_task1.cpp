#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int accType;
	int accBal,totalBal;
    string a ;
	cout << "Select Your Account (1) saving (2) Checking ";
	cin >> accType;
if (accType==1 || accType==2 )
{
	cout << "Enter Your Account Balance:";
	cin >> accBal;
    if (accBal<200)
    {
       if (accType==1)
       {
        totalBal=(accBal-10);
        a= "A 10$ service charge is deducted from your account\n As your (savings ) accout balance is less then minimum balance (200$)";
       }
       else if (accType==2)
       {
       totalBal=(accBal-25);
            a= "A 25$ service charge is deducted from your account\n As your (checking ) accout balance is less then minimum balance (200$)";

       }
       
    }
    else{

        if (accType==1)
        {
           totalBal=accBal+(accBal*0.04);
           a = "4% intersest is added to your account";
        }
        else if (accType==2 && accBal<5200)
        {
           totalBal=accBal+(accBal*0.03);
            a = "3% intersest is added to your account";
        }
        else if (accType==2 && accBal>=5200)
        {
            totalBal=accBal+(accBal*0.05);
             a = "5% intersest is added to your account";
        }
        
    }
    cout<<"\n"<<endl;
	cout<<"Your account balance is :"<<accBal<<endl;
    cout<<a<<endl;
    cout<<"So your new Balance is :"<<totalBal<<endl;
}
else{cout<<"You entered invalid type "<<endl<<"just give input in the form of 1 and 2";}
    

	return 0;
}