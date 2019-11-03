#include <stdio.h>


int arr[6][6];

int main() {
    // input
    for(int i=0; i<4; i++)
        for(int j=0; j<2; j++)
            scanf_s("%d", &arr[i][j]);
    // average sequence of each row
    for(int i=0; i<4; i++) {
        int sum = 0;
        for(int j=0; j<2; j++) {
            sum +=arr[i][j];
        }
        printf("%d ", sum/2);
    }

    printf("\n");
    // average sequence of each column
    for(int i=0; i<2; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) {
            sum +=arr[j][i];
        }
        printf("%d ", sum/4);
    }

    printf("\n");
    // average of all elements in array
    int sum = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            sum +=arr[i][j];
        }
    }

    printf("%d", sum/8);
    return 0;
}
