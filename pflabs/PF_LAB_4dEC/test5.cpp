#include <iostream>
using namespace std;

double MeanMin2(int* arr, int size) {
    int min1 = *arr;
    int min2 = *(arr + 1);
    if(min2 < min1) swap(min1, min2);

    for(int* ptr = arr + 2; ptr < arr + size; ptr++) {
        if(*ptr < min1) {
            min2 = min1;
            min1 = *ptr;
        } else if(*ptr < min2) {
            min2 = *ptr;
        }
    }
    return (min1 + min2) / 2.0;
}

int main() {
    int arr[6] = {5, 3, 8, 1, 4, 2};
    cout << "Mean of 2 smallest: " << MeanMin2(arr, 6) << endl;
    return 0;
}
