//
//  main.c
//  assignment 2
//
//  Created by 신유진 on 28/03/2019.
//  Copyright © 2019 신유진. All rights reserved.
//

#include <stdio.h>

int main() {
    int num;
    printf("Enter 3-digit number:");
    scanf_s("%d", &num);
    printf("1st digit:%d\n", num/100);
    printf("2nd digit:%d\n", num%100/10);
    printf("3rd digit:%d\n", num%10);
    return 0;
}

