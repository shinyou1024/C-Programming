#include <stdio.h>

void sort(int arr[10]) {

    for(int i=0; i<10; i++) {
        int min = 0;
        // find the smallest number among the numbers which aren't sorted yet
        for(int j=0; j<=9-i; j++) {
            if(arr[j]<arr[min])
                min = j;
        }
        // change the smallest of this turn and swap it with right position
        int tmp = arr[9-i];
        arr[9-i] = arr[min];
        arr[min] = tmp;

    }

    for(int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[10];
    printf("Input 10 integers value\n");
    for(int i=0; i<10; i++) {
        scanf_s("%d", &arr[i]);
    }
    sort(arr);
}
