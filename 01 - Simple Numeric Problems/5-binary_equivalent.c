//h. Write a program that shows the binary equivalent of a given positive number between 0 to 255.

#include<stdio.h>

int main() {
    int positiveInteger;
    int quotient;
    int remainder;

    printf("%s", "Enter positive Integer between 0 and 255 - ");
    scanf("%d", &positiveInteger);

    quotient = positiveInteger/2;
    remainder = positiveInteger%2;

    printf("%d", remainder);
    while (quotient > 0) {
        quotient = positiveInteger/2;
        remainder = positiveInteger%2;

        printf("%d", remainder);

        positiveInteger = quotient;
    }
    
    return 0;
}