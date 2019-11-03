#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void ran(int arr[]) {
    int seed = time(NULL);
    srand(seed);
    for(int i=0; i<10; i++) {

        int random = rand()%MAX;
        arr[i] = random;
    }
}
int main() {
    int arr[10] ={0, };
    printf("[Before executing fill function]\n");
    printf("=================================\n");
    for(int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("=================================\n");
    printf("[After executing fill function]\n");
    printf("=================================\n");
    ran(arr);
    for(int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("=================================\n");
    return 0;
}
