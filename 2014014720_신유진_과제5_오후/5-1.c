#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("please enter your number to print.\n");
    scanf_s("%d", &n);
    // i increases for 9times
    for(int i=1; i<=9; i++) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}
