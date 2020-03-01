#include <iostream>
#include <stdio.h>
using namespace std;

double const pi = 3.141592653589;

int main() {
    double r;
    cin >> r;
    double arc = 2 * pi * r;
    double area = pi * r * r;
    printf("%f %f\n", area, arc);

    return 0;
}