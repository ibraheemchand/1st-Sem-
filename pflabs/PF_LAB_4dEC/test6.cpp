#include <iostream>
using namespace std;

void SortTheEvens(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while(start < end) {
        while(*start % 2 == 0 && start < end) start++;
        while(*end % 2 != 0 && start < end) end--;
        if(start < end) {
            int temp = *start;
            *start = *end;
            *end = temp;
        }
    }

    int* evenEnd = arr;
    while(evenEnd < arr + size && *evenEnd % 2 == 0) evenEnd++;

    for(int* i = arr; i < evenEnd - 1; i++) {
        for(int* j = arr; j < evenEnd - 1; j++) {
            if(*j > *(j + 1)) {
                int t = *j;
                *j = *(j + 1);
                *(j + 1) = t;
            }
        }
    }
}

int main() {
    int arr[7] = {9, 4, 7, 2, 6, 3, 8};
    SortTheEvens(arr, 7);
    for(int* ptr = arr; ptr < arr + 7; ptr++) cout << *ptr << " ";
    cout << endl;
    return 0;
}
