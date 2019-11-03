#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Input any integer number : ");
    scanf_s("%d", &n);
    printf("[Prime number]\n");

    for(int i=2; i<=n; i++) {
        int j;
        // check if j has divisor
        for(j=2; j<i; j++) {
            // if j has divisor it's definitely not a prime number
            if(i%j == 0)
                break;
        }
        // if j became i, it has no divisor, so j is prime number
        if(j==i)
            printf("%d ", j);
    }
    return 0;
}
