#include <stdio.h>

// function that print all values in matrix form
void func(int a[3][3]) {
    printf("<Output>\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int arr[3][3];
    printf("<Input>\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf_s("%d", &arr[i][j]);
    func(arr);
    return 0;
}
