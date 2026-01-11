#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {5, 2, 9, 1, 5};
    int arr2[] = {5, 2, 9, 1, 5};
    int arr3[] = {5, 2, 9, 1, 5};
    int size = 5;

    for(int i = 1; i < size; i++)
    {
        int key = arr1[i];
        int j = i - 1;
        while(j >= 0 && arr1[j] > key)
        {
            arr1[j + 1] = arr1[j];
            j--;
        }
        arr1[j + 1] = key;
    }
    for(int i = 0; i < size; i++)
        cout << arr1[i] << " ";
    cout << endl;

    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr2[j] < arr2[min])
                min = j;
        }
        int temp = arr2[i];
        arr2[i] = arr2[min];
        arr2[min] = temp;
    }
    for(int i = 0; i < size; i++)
        cout << arr2[i] << " ";
    cout << endl;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}
