#include <iostream>
using namespace std;

void Display() {
    int i = 10;
    char c = 'A';
    float f = 3.14;

    int* pi = &i;
    char* pc = &c;
    float* pf = &f;

    cout << "Values of variables: " << i << ", " << c << ", " << f << endl;
    cout << "Values stored in pointers: " << *pi << ", " << *pc << ", " << *pf << endl;
    cout << "Addresses of variables: " << &i << ", " << (void*)&c << ", " << &f << endl;
    cout << "Addresses of pointers: " << &pi << ", " << &pc << ", " << &pf << endl;
    cout << "Sizes of variables: " << sizeof(i) << ", " << sizeof(c) << ", " << sizeof(f) << endl;
    cout << "Sizes of pointers: " << sizeof(pi) << ", " << sizeof(pc) << ", " << sizeof(pf) << endl;
}

int main() {
    Display();
    return 0;
}
