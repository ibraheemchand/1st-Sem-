#include <iostream>
using namespace std;

void printArray(int a[10][10], int rows, int column) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            cout << a[i][j] << endl;
        }
        cout << endl;
    }
}

int main() {
    int rows , coloumns;
cout<<"Enter rows and coloumns : ";
cin>>rows>>coloumns;

    int a[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "i=" << i << " j=" << j << endl;
            cin >> a[i][j];
        }
    }

    printArray(a, 10, 10);

    return 0;
}
