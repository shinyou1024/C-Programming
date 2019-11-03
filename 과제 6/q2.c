#include <stdio.h>



int main() {
    int n;
    printf("Enter the number : ");
    scanf_s("%d", &n);

    while(n>0) {
        printf("%d", n%10); // print ones place
        n /=10; // delete ones place
    }
    return 0;
}
