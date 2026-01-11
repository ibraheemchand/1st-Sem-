#include <iostream>
using namespace std;

void Swaply(int& num1, int* num2, int& product) {
    int temp = num1;
    num1 = *num2;
    *num2 = temp;

    int msd1 = num1, msd2 = *num2;
    while(msd1 >= 10) msd1 /= 10;
    while(msd2 >= 10) msd2 /= 10;

    product = msd1 * msd2;

    cout << "Inside Swaply - num1: " << num1 << ", num2: " << *num2 << ", product: " << product << endl;
}

int main() {
    int a = 12, b = 34, p = 0;
    Swaply(a, &b, p);
    cout << "After Swaply in main - a: " << a << ", b: " << b << ", product: " << p << endl;
    return 0;
}
