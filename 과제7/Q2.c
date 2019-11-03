#include <stdio.h>

void largest(int arr[10]) {
    int *first=arr, *second=arr;

    // find the largest number
    for(int i=0; i<10; i++) {
        if(*(first+i)>*first)
            first = first+i; // the pointer now points larger number
    }
    printf("The largest value is %d\n", *first);
    // change the value of the largest to 0
    *first = 0;
    // find the second largest number
    for(int i=0; i<10; i++) {
        if(*(second+i)>*second)
            second = second+i; // the pointer now points larger number
    }
    printf("The second largest value is %d", *second);


}

int main() {
    int arr[10];
    printf("Input 10 integers value\n");
    for(int i=0; i<10; i++) {
        scanf_s("%d", &arr[i]);
    }
    largest(arr);
}
