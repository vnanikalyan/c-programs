/*d. Write a program that prints a multiplication table for a given number and the number
of rows in the table. For example, for a number 5 and rows = 3, the output should be:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
*/

#include<stdio.h>

int main() {
    int number;
    int rows;

    printf("\n Enter the number for which the table should be printed, also the number of rows : ");
    scanf("%d%d", &number, &rows);

    int i;
    for(i=1;i<=rows;i++) {
        printf("\n %d x %d = %d", number, i, number * i);
    }

    printf("\n");
    return 0;
}