#include <iostream>

using namespace std;

int fabi(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
        return fabi(num - 1) + fabi(num - 2);
}
int main()
{
    int sum = 0, no ;
    cout<<"Enter Num of values : ";
    cin>>no;
    for (int i = 1; i <= no; i++)
    {
        cout << fabi(i) << "\n";
        sum += fabi(i);
    }
    
    cout << endl << "Sum: " << sum;
}
