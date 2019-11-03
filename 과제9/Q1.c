#include <stdio.h>
#include <iostream>
using namespace std;
// function to exchange two variables

// function to compare three variables
void line_up(double * max, double * mid, double * min) {

    if(*max<*mid) {
        exchange(max, mid);
        if(*mid<*min) {
            exchange(mid, min);
            if(*max<*min) {
                exchange(max, min);
            }
            if(*max<*mid)
                exchange(max, mid);
        }
    }
    else {
        if(*mid < *min)
            exchange(mid, min);
        if(*max < *mid)
            exchange(max, mid);
    }

}
void exchange(double * x, double * y) {

    double tmp = *x;
    *x = *y;
    *y = tmp;

}
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    line_up(&a, &b, &c);
    printf("%.2lf %.2lf %.2lf", a, b, c);
    return 0;
}
