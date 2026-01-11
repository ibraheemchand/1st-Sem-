#include <iostream>
using namespace std;
int rows = 2, columns=2;
void PuttingData(int arr[][2]){
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
       cout<<"Enter Number "<<endl;
        cin>>arr[i][j];
    }
}

}

void transpose(int arr[][2]){
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
       swap(arr[j][i],arr[i][j]);
    }
}


}


void print(int arr[][2]){
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
       cout<<arr[i][j]<<" ";
    }cout<<endl;
}

}
int main(){


int arr1[rows][columns];
int arr2[rows][columns];

PuttingData(arr1);
cout<<endl;

print(arr1);
cout<<endl;


transpose(arr1);
cout<<endl;

print(arr1);

    return 0 ;
}