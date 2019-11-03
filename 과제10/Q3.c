#include<stdio.h>
#include <string.h>
typedef struct {
    int h;
    int m;
    int s;


}TIME;

// parameter should be a pointer to directly change the value of variable
void sec_inc(TIME* t) {
    if(t->s<59){
        t->s++;
    }
    else if(t->s==59) {
        t->s = 0;
        if(t->m<59)
            t->m++;
        else if(t->m==59) {
            t->m = 0;
            if(t->h==23) {
                t->h=0;
            }
            else t->h++;
        }
    }
}
void show(TIME t) {
    if(t.h<10)
        printf("%02d:", t.h); //padding 2, filled with 0
    else
        printf("%d:", t.h);
    if(t.m<10)
        printf("%02d:", t.m);
    else
        printf("%d:", t.m);
    if(t.m<10)
        printf("%02d", t.s);
    else
        printf("%d", t.s);
    printf("\n");

}
int main()
{
    TIME time;
    printf("Enter the starting time (hr min sec): ");
    scanf_s("%d %d %d", &time.h, &time.m, &time.s);
    int n;
    printf("How many seconds do you want to count? ");
    scanf_s("%d", &n);
    for(int i=0; i<n; i++) {
        sec_inc(&time);
        show(time);
    }

    return 0;
}
