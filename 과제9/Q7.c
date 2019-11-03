#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf_s("%d", &n);

    int* mem = (int*) malloc(n*sizeof(n));
    printf("Enter Number: ");
    int sum = 0;
    for(int i=0; i<n; i++) {
        scanf_s("%d", &mem[i]);
        sum += mem[i];
    }
    printf("Sum = %d", sum);
    free(mem);
    return 0;
}
