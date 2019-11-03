#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char name[20];
   char sID[20];
}P;
// function to swap two structures
void swap(P* a, P* b) {
   P tmp = *a;
   *a = *b;
   *b = tmp;
}
int main() {
   P p1, p2;
   printf("Enter the information of first person\n");
   scanf("%s", p1.name);
   scanf("%s", p1.sID);
   printf("Enter the information of second person\n");
   scanf("%s", p2.name);
   scanf("%s", p2.sID);

   printf("==================Before==================\n");
   printf("Name : %s\t%s\n", p1.name, p2.name);
   printf("Student ID : %s\t%s\n", p1.sID, p2.sID);
   // pass the address of two structures
   swap(&p1, &p2);

   printf("==================After==================\n");
   printf("Name : %s\t%s\n", p1.name, p2.name);
   printf("Student ID : %s\t%s\n", p1.sID, p2.sID);
   return 0;
}
