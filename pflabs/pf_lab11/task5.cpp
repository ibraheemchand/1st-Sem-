#include <iostream>
using namespace std;

int main() {
    int a[5][5] = {
        {2,3,5,3,1},
        {4,5,1,2,1},
        {4,7,3,2,0},
        {2,1,1,5,1},
        {1,7,8,9,0}
    };

    int sum = 0;
    for (int i = 1; i < 5; i += 2)
        for (int j = 1; j < 5; j += 2)
            sum += a[i][j];

    cout << sum;
}
