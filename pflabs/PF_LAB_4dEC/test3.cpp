#include <iostream>
#include <cstdlib>
using namespace std;

int Adder(int* arr, int size) {
    int sum = 0;
    for(int* ptr = arr; ptr < arr + size; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) arr[i] = rand() % 100;
    cout << "Sum of array: " << Adder(arr, 5) << endl;
    return 0;
}
