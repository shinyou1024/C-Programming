#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void extend(int * a, int size) {
   realloc(a, size*sizeof(int));
}
int main() {

   int size;
   printf("Initializing the size of array : ");
   scanf("%d", &size);
   int* arr = (int*)malloc(size*sizeof(int));
   for (int i = 0; i < size; i++) {
      printf("Input the element : ");
      scanf("%d", &arr[i]);
   }
   fflush(stdin); // To clear the buffer

   while (1) {
      fflush(stdin);
      char sel;
      printf("Expand the length of array? (y/n): ");
      scanf("%c", &sel);

      if (sel == 'y') {
         int n;
         printf("How much of the size to expand?\n");
         scanf("%d", &n);
         extend(arr, n+size); // pass the new size of arr
         for (int i = 0; i < n; i++) {
            printf("Input the element : ");
            scanf("%d", &arr[size + i]);
         }
         // update the size of arr
         size += n;
      }

      else {
         for (int i = 0; i < size; i++) {
            printf("arr[%d] : %d\n", i, arr[i]);
         }
         printf("\n");
         free(arr);
         break;
      }

   }


   return 0;
}
