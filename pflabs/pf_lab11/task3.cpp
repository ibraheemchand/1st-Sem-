#include <iostream>
using namespace std;

int main() {
    int a[5] = {321, 2345, 4, 876, 54};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int x = a[i];
        while (x >= 10) x /= 10;
        sum += x;
    }
    cout << sum;
}
