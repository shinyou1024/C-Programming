#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
  FILE *fp;
  char ch;
  fp = fopen("input.txt", "rt");
  if (fp == NULL) {
    puts("File load error");
    return -1;
  }
  while (1) {
    ch = fgetc(fp);
    if (ch == EOF)
      break;
    if (ch == 'T') {
      printf("\n");
      printf("\n");
    }
    printf("%c", ch);
    if (ch == '.')
      printf("\n");
    }
    fclose(fp);
    return 0;
}
