#define _CRT_SECURE_NO_WARNINGS
#define ID_LEN 7
#define NAME_LEN 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
   char id[ID_LEN];
   char name[NAME_LEN];
   int math;
   int eng;
} STUDENT;


// -> : 주소 접근, . : 단순접근
int main() {
   int num;
   printf("How many student?");
   scanf("%d", &num);
   STUDENT* list = NULL;
   list = (STUDENT*)malloc(num*sizeof(STUDENT));

   // To initialize the list
   for (int i = 0; i < num; i++) {
      printf("Enter data for student No.%d\n", i + 1);
      printf("ID:");
      scanf("%s", list[i].id);

      printf("Name:");
      scanf("%s", list[i].name);

      printf("Math score:");
      scanf("%d", &list[i].math);

      printf("English score:");
      scanf("%d", &list[i].eng);
      // string은 어차피 주소값이고, int는 아니므로 주소값을 인자로 줘야 함
   }
   // flag to consider ending
   int flag = 1;
   while(flag) {
   printf("<Select Menu>\n");
   printf("Press 1 to 'Show' the scores.\n");
   printf("Press 2 to 'ADD' the scores.\n");
   printf("Press 3 to 'SEARCH' the scores.\n");
   printf("Press 4 to 'EXIT' the scores.\n");
   int sel;

   scanf("%d", &sel);
      switch (sel) {
      case 1:
         printf("-------------------------------------------------\n");
         printf("STUDENT ID\tNAME\tMATH SCORE\tENGLISH SCORE\tAVERAGE SCOR\n");
         for (int i = 0; i<num; i++) {
            int avg = (list[i].math + list[i].eng) / 2;
            printf("%-10s\t%-4s\t%-10d\t%-13d\t%d\n", list[i].id, list[i].name, list[i].math, list[i].eng, avg);
         }
         printf("-------------------------------------------------\n");
         break;
      case 2:
         num++;
         printf("Enter data for new student\n");
         list = (STUDENT*)realloc(list, (num)*sizeof(STUDENT));
         printf("ID: ");
         scanf("%s", list[num-1].id);
         printf("Name: ");
         scanf("%s", list[num-1].name);
         printf("Math score: ");
         scanf("%d", &list[num-1].math);
         printf("English score: ");
         scanf("%d", &list[num-1].eng);
         printf("-------------------------------------------------\n");
         printf("STUDENT ID\tNAME\tMATH SCORE\tENGLISH SCORE\tAVERAGE SCOR\n");
         for (int i = 0; i<num; i++) {
            int avg = (list[i].math + list[i].eng) / 2;
            printf("%-10s\t%-4s\t%-10d\t%-13d\t%d\n", list[i].id, list[i].name, list[i].math, list[i].eng, avg);
         }
         printf("-------------------------------------------------\n");
         break;
      case 3:
         printf("Enter student ID: ");
         char t[7];
         scanf("%s", t);
         for (int i = 0; i < num; i++) {
            if (!strcmp(t, list[i].id)) {
               printf("ID: %s\n", list[i].id);
               printf("Name: %s\n", list[i].name);
               printf("Math score: %d\n", list[i].math);
               printf("English score: %d\n", list[i].eng);
               printf("Average score: %d\n", (list[i].math + list[i].eng) / 2);
            }
         }
         break;
      case 4:
         free(list);
         flag = 0; // to break the while loop
         printf("Bye!");
         break;
      }

   }
   return 0;
}
