/*
b. Write a C program to construct a pyramid of numbers as follows:
1           *           1           1           *
1 2         * *         2 3         2 2         * *
1 2 3       * * *       4 5 6       3 3 3       * * *
                                    4 4 4 4     * * 
                                                *
*/

#include <stdio.h>
void main() {
    int i;
    int j;

    for(i=1;i<4;i++) {
        for(j=1;j<=i;j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    //////////////////////////////////

    for(i=1;i<4;i++) {
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //////////////////////////////////

    int cnt = 1;
    for(i=1;i<4;i++) {
        for(j=1;j<=i;j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
    printf("\n");
    //////////////////////////////////
    
    for(i=1;i<5;i++) {
        for(j=1;j<=i;j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
    //////////////////////////////////

    for(i=1;i<6;i++) {
        if(i > 3) {
            for(j=i;j<6;j++) {
                   printf("* ");
            }
        } else {
            for(j=1;j<=i;j++) {
                   printf("* ");
            }
        }
        printf("\n");
    }
    
}