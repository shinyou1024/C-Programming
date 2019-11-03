#include <stdio.h>

// parameters are address of double type variables
void swap(double * x, double * y) {
    double tmp = *x; // to store the value of *x temporaily
    *x = *y;
    *y = tmp;
}

int main() {
    double a = 1.3;
    double b = 1.7;

    printf("a, b values before changed: %.1lf, %.1lf\n", a, b);
    swap(&a, &b);
    printf("a, b values after changed: %.1lf, %.1lf", a, b);



    return 0;
}
