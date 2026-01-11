#include <iostream>
using namespace std;

int sumDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int rev(int n){
    int r = 0;
    while(n > 0){
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Sum of digits: " << sumDigits(n) << endl;
    cout << "Reversed: " << rev(n);

    return 0;
}
