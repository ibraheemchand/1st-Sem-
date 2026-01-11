#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int* marks = new int[n];
    cout << "Enter marks: ";
    for(int* ptr = marks; ptr < marks + n; ptr++) cin >> *ptr;

    int sum = 0, max = *marks, min = *marks;
    for(int* ptr = marks; ptr < marks + n; ptr++) {
        sum += *ptr;
        if(*ptr > max) max = *ptr;
        if(*ptr < min) min = *ptr;
    }

    cout << "Highest: " << max << ", Lowest: " << min << ", Average: " << sum / (double)n << endl;
    delete[] marks;
    return 0;
}
