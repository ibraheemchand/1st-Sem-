#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    for (int i = 0; i < 5; i++) a[i] = a[i] * a[i];
    for (int i = 0, j = 4; i < 5; i++, j--) b[i] = a[j];
    for (int i = 0; i < 5; i++) cout << b[i] << " ";
}
