#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf_s("%d", &size);
    int* mem = (int*) malloc(size*sizeof(int));

    for(int i=0; i<size; i++) {
        printf("Addresses of previous allocated memory: %d\n", mem+i);
    }


    printf("Enter new size of array: ");
    scanf_s("%d", &size);

    //reallocation of memory with new size
    mem = (int*) realloc(mem, size*sizeof(int));
    for(int i=0; i<size; i++) {
        printf("Addresses of previous allocated memory: %d\n", mem+i);
    }

    free(mem);
    return 0;
}
