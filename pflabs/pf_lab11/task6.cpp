#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    double d1 = sqrt(pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2)+pow(p[0][2]-p[1][2],2));
    double d2 = sqrt(pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2)+pow(p[0][2]-p[2][2],2));
    double d3 = sqrt(pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2)+pow(p[1][2]-p[2][2],2));

    double avg = (d1 + d2 + d3) / 3.0;
    cout << avg;
}
