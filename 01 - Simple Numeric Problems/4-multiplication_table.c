/*Write a program that prints a multiplication table for a given number and the number
of rows in the table. For example, for a number 5 and rows = 3, the output should be:
e. 5 x 1 = 5
f. 5 x 2 = 10
g. 5 x 3 = 15*/

#include<stdio.h>

int main() {
    int rows;
    int number;
    int i;

    printf("\n Enter a number : ");
    scanf("%d", &number);
    printf("\n Enter number of rows to be printed : ");
    scanf("%d", &rows);

    for(i=1; i<=rows;i++) {
        printf("%d x %d = %d \n", number, i, number * i);
    }
    
    return 0;
}