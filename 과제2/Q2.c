//
//  Q2.c
//  assignment 2
//
//  Created by 신유진 on 28/03/2019.
//  Copyright © 2019 신유진. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    printf("input coefficient a,b,c:");
    scanf_s("%d, %d, %d", &a, &b, &c);
    printf("input coefficient d,e,f:");
    scanf_s("%d, %d, %d", &d, &e, &f);
    float x = (float) (c*e-b*f)/(b*d-a*e);
    float y = (float) (c*d-a*f)/(a*e-b*d);
    printf("The two linear equations are:\n");
    printf("%dx+%dy+%d\n", a, b, c);
    printf("%dx+%dy+%d\n", d, e, f);
    printf("Intersection point is <%.2f. %.2f>\n", x, y);
    return 0;
}
