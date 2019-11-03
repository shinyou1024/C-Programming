#include<stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf_s("%d", &n);
    char s[20];
    scanf_s("%s", s);

    for(int i=0; i<strlen(s)-n+1; i++) {
        int idx = i; // index of printing
        // iterate for n times
        for(int j=0; j<n; j++) {
            printf("%c", s[idx]);
            idx++;
        }
        printf("\n");
    }

    return 0;
}
