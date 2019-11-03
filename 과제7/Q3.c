#include <stdio.h>

void add(int arr[5]) {
    int * ptr = arr;
    for(int i=0; i<5; i++) {
        printf("%dth  value in the array : %d\n", i, *ptr+2);
        ptr++; // increase ptr by 4bytes
    }

}

int main() {
    int arr[5]={1, 2, 3, 4, 5};
    add(arr);
}
