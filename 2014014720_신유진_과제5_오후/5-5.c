#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // make random number
    srand(time (NULL) );
    int ans= rand()%900+100;
    // find number of each place
    int a3 = ans/100;
    int a2 = ans%100/10;
    int a1 = ans%10;


    printf("----------S T A R T-----------\n");
    while(1) {
        // initialize the variables
        int strike = 0;
        int ball = 0;

        int input;
        printf("Guess Number (100~999): ");
        scanf_s("%d", &input);

        int d3 = input/100;
        int d2 = input%100/10;
        int d1 = input%10;


        if(d1==a1)
            strike++;
        else if(d1==a2 || d1==a3)
            ball++;

        if(d2==a2)
            strike++;
        else if(d2==a1 || d2==a3)
            ball++;

        if(d3==a3)
            strike++;
        else if(d3==a1 || d3==a2)
            ball++;

        // escape condition
        if(strike==3)
            break;
        // if the answer is not correct, let user know the state of strike and ball
        else {
            printf("%d strike, %d ball!\n", strike, ball);
        }
    }

    // only executed when the 'while loop' has breaked with correct answer
    printf("Correct! answer is %d\n", ans);


    return 0;
}
