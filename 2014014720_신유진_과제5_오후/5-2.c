#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Input any integer number : ");
    scanf_s("%d", &n);
    // for loop to print even numbers
    // stops when 'i' is same as the input number
    for(int i=2; i<=n; i+=2) {
        printf("%d\n", i);
    }
    return 0;
}
