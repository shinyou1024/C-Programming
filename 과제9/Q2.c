#include <stdio.h>

int main() {
    double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
    double * ptr = ary;

    // printf elemets from backward
    for(int i=4; i>=0; i--) {
        printf("%.1lf ", *(ptr+i));
    }

    return 0;
}
