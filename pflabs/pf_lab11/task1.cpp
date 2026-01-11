#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "IBRAHEEM CHAND";
    int countA = 0;
    for (char c : name) {
        if (c == 'a' || c == 'A') countA++;
    }
    cout << countA;
}
