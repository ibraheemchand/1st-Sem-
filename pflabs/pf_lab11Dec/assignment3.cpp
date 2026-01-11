#include <iostream>
#include <string>
using namespace std ;
struct Details
{
    string  name;
    string description;
    string *menus;
    int Avgprice;
    bool vegOrNon;



};

struct menuItem
{
    string nameOFdish;
    string link;
    double price;
};


int main(){
    int numRest ;
    cout<<"How many restaurants are you going to enter? "<<endl;
    cin>> numRest;

    menuItem foodItems[3];


    Details resturents[numRest];
    for (int i = 0; i < numRest; i++)
    {
        cout<<"Enter the name of Resturent : "<<endl;
        cin>>resturents[i].name;
    
        cout<<"Enter the description of Resturent : "<<endl;
        cin>>resturents[i].description;
    
        cout<<"Enter the average prices of Resturent : "<<endl;
        cin>>resturents[i].Avgprice;

        cout<<"Veg (0) or Non Veg (1) "<<endl;
        cin>>resturents[i].vegOrNon;    

    }
    



    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the name of dish : "<<endl;
        cin>>foodItems[i].nameOFdish;
        cout<<"Enter link of that dish "<<endl;
        cin>>foodItems[i].link;
        cout<<"Enter the price of dish : "<<endl;
        cin>>foodItems[i].price;
    }






    
    int max, min;
    cout<<"Enter price range of your budget min and max"<<endl;
    cin>>min>>max;
    



    return 0 ;
}