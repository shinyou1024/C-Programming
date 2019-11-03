#include <stdio.h>

int main() {
    int n, x, y;
    printf("Enter the number and range : ");
    scanf_s("%d %d %d", &n, &x, &y);
    printf("The multiple of %d in range <%d, %d> : ", n, x, y);

    int cnt = 0; // the number of multiples in range
    int i = 1; // index
    while(1) {
        int num = n * i;
        // exit condition
        if(num>y)
            break;

        if(num<x) {
            i++;
            continue;
        }
        printf("%d ", num);
        i++;
        cnt++;
    }

    printf("\nThere are %d multiples\n", cnt);

    return 0;
}
