#include <iostream>
using namespace std;

void selectSort(int a[], int size){
  int min;
    int temp;
   
    for (int i = 0; i < size-1; i++)
    {   temp=0;
       min = INT32_MAX;

       for (int j = i ; j < size; j++)
       {
          if (a[j]<min)
        {
            min=a[j];
            temp=j;
            
        }
          
       }
       if (temp)
       {
        swap(a[temp],a[i]);
       }
       
       
    }
    


  
}

void print(int a[], int size){

for (int i = 0; i < size; i++)
{
    cout<<a[i]<<" ";
}


}

int main (){
int size = 15; ;
int a[15] = {42, 7, 19, 3, 88, 14, 55, 1, 67, 23, 9, 76, 31, 5, 60};


selectSort(a, size);
print(a , size);
    return 0 ;
}