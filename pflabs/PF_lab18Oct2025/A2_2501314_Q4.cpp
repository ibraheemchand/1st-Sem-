#include <iostream>
using namespace std;

int rev(int n){
    int reverseDigit = 0;
    while (n > 0) {
        int revInteger = n % 10;
        reverseDigit = reverseDigit * 10 + revInteger;
        n = n / 10;
    }
    return reverseDigit;
}

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << rev(n);
    return 0;
}
