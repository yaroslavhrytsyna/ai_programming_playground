#include <cmath>
#include <cstdio>

int main() {
    float a, b, res;

    a = 1000;
    b = 0.0001;
    res = 0;

    res = (pow(a + b, 2) - (pow(a, 2) + 2*a*b))/(pow(b, 2));

    printf("%f", res);

    return 0;
}