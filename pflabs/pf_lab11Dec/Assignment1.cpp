#include <iostream>
#include <string>
using namespace std;
struct date
{
  int day;
  string month;
  int year;
};


struct eqS
{
    string name;
    string location;
    int date;
    float magnitude;
    int fatalities;
};



int main (){

    eqS earthqick [3];


    for (int i = 0; i < 3; i++)
    {
       cout<<"Name of Eathquake :"<<endl;
       cin>>earthqick[i].name;
       cout<<"Location :"<<endl;
       cin>>earthqick[i].location;
       cout<<"Date :"<<endl;
       cin>>earthqick[i].date;

       

       cout<<"magnitude :"<<endl;
       cin>>earthqick[i].magnitude;
       cout<<"No. of fatalities :"<<endl;
       cin>>earthqick[i].fatalities;
    }
int  maut=0;
float avgMags=0;
int maxFatities=0;
float maxMag=0;
int f=0;
int m=0;


    for (int i = 0; i < 3; i++)
    {
        maut+=(earthqick[i].fatalities);
        avgMags+=(earthqick[i].magnitude);

        if (earthqick[i].magnitude>maxMag)
        {
           maxMag=earthqick[i].magnitude;
           m=i;

        }
        if (earthqick[i].fatalities>maxFatities)
        {
           maxFatities=earthqick[i].fatalities;
           f=i;
        }
        
    }
    


cout<<"--------------------ANALYIS-----------------------"<<endl;
    cout<<"The total Fatalities are : "<<maut<<endl;
    cout<<"The Average of all magnitudes are : "<<(avgMags/3.0)<<endl;
    cout<<earthqick[m].name<<"of magnitude "<<earthqick[m].magnitude<<"have maximum magnitude"<<endl;
    cout<<earthqick[f].name<<" have "<<earthqick[f].fatalities<<"fatalities and maximum among all "<<endl;
    
   
    
    return 0;
}