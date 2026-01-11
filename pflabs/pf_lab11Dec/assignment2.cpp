#include <iostream>
#include <string>
using namespace std;

struct qte
{
    string autherName;
    string qoute;
    int likes;
};


int main(){

    qte Qoute[7];
    int totalLikes=0;


   for (int i = 0; i < 7; i++)
   {
     
     cout<<"The name of auther : "<<endl;
     cin>>Qoute[i].autherName;

     cout<<"Write the Qoute : "<<endl;
     cin>>Qoute[i].qoute;

     cout<<" Like "<<endl;
     cin>>Qoute[i].likes;
     if (Qoute[i].likes<0)
     {
        cout<<"!invalid input "<<endl;
        break;
     }
     totalLikes+=Qoute[i].likes;


   }
   int avgLikes = totalLikes/7;
   
   for (int i = 0; i < 7; i++)
   {
     if (avgLikes<Qoute[i].likes)
     {cout<<"------------------------------"<<endl;
        cout<<Qoute[i].qoute<<endl; 

    cout<<endl;
    cout<<"The persentage of likes are  : "<<(Qoute[i].likes/totalLikes)*100<<endl;
    cout<<"------------------------------"<<endl;
     }
     
     



     if (Qoute[i].likes<0)
     {break;}

   }
   


    return 0 ;
}