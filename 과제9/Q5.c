#include <stdio.h>
#include <stdlib.h>

int main() {
    //dynamic allocation with calloc
    double * ptr = (double*) calloc(3, sizeof(double));

    double max = 0;

    for(int i=0; i<3; i++) {
        printf("Enter Number %d:", i+1);
        scanf_s("%lf", ptr+i);

        double num = *(ptr+i); // entered value
        // if it's larger than the biggest so far, store it into max
        if(num>max)
            max = num;
    }

    printf("Largest number is %.2lf", max);
    free(ptr);
    return 0;
}
