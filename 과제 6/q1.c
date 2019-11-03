#include <stdio.h>

// m, n : given numbers, cnt : count of recursive, num : result
int power(int m, int num, int cnt, int n) {
    // return when it reaches n
    if(cnt==n)
        return num;
    return power(m, m*num, ++cnt, n);
}


int main() {
    int n, m;
    printf("Enter the number and its power in sequence : ");
    scanf_s("%d %d", &m, &n);
    printf("The %d-th power of %d is %d\n", n, m, power(m, 1, 0, n));
    return 0;
}
