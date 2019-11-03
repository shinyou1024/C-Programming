#include <stdio.h>

// function to calcuate the area of triangle
int tri(int a, int b) {
    int area = a*b/2;
    return area;
}

// function to calcuate the area of lectangle
int rec(int a, int b) {
    int area = a*b;
    return area;
}
int main() {
    int x, y;
    printf("Enter two integer numbers: ");
    scanf_s("%d %d", &x, &y);

    // array which stores function pointers
    int (*FuncPtr[2])(int a, int b) = {&tri, &rec}; // initialization

    int sel;
    printf("Enter 0 to find area of triangle or 1 to find area of rectangle: ");
    scanf_s("%d", &sel);
    printf("the result is %d", FuncPtr[sel](x, y)); // it will call the requested function through address in array

    return 0;
}
