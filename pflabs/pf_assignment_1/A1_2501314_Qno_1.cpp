#include <iostream>
using namespace std;
int main(){
int cookiesNum,container=0,box=0;
cout<<"Enter NO. of cookies :";
cin>>cookiesNum;
box=cookiesNum/24;
container=box/75;
if (cookiesNum<75)
{
    
    if (cookiesNum>=24 && cookiesNum%24!=0)
    {
        cout<<"the"<<(cookiesNum%24)<< " number of leftover cookies in boxes!"<<endl;
    }
    
    else
    cout<<"Cookies are packed in "<<box<<" boxes";
    
}
else if (cookiesNum<24)
    {
        cout<<cookiesNum<<" cookies not packed in any  box or container ";
    }
else if (cookiesNum>=75)
{
   
     if (box%75!=0)
    {
       cout<<"the " <<(box%75)<<" number of leftover box in containner !"<<endl;
    }  
       else cout<<"cookies are packed in "<<box<<" boxes";
        
    
}  
    
else
    cout<<"The total Number of "<<cookiesNum <<"Cookies"<<"\nCookies are packed in "<<box<<" boxes"<<" and in"<<container<<"containners"<<endl;



    return 0;
}
