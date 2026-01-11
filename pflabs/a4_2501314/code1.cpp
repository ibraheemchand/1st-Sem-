#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int key = 10;

    int linearIndex = -1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            linearIndex = i;
            break;
        }
    }
    cout << linearIndex << endl;

    int low = 0, high = size - 1;
    int binaryIndex = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            binaryIndex = mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << binaryIndex << endl;

    return 0;
}
