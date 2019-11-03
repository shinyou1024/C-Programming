#include <stdio.h>
#include <stdlib.h> // header to use malloc function

int main() {
    int n;
    printf("How many data do you want?: ");
    scanf("%d", &n);

    // dynamic allocation
    int * ptr = (int*) malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf_s("%d", ptr+i);
    }

    printf("Input data is: ");
    for(int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }
    free(ptr);
    return 0;
}
