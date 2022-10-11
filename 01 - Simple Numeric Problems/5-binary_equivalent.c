//h. Write a program that shows the binary equivalent of a given positive number between 0 to 255.

#include<stdio.h>

int main() {
    int positiveInteger;
    int quotient;
    int remainder;
    int result[10];

    printf("%s", "Enter positive Integer between 0 and 255 - ");
    scanf("%d", &positiveInteger);

    quotient = positiveInteger/2;
    remainder = positiveInteger%2;

    if(quotient == 0) {
        printf("%d \n", remainder);
    }
    
    for(int i=0; quotient > 0; i++) {
        quotient = positiveInteger/2;
        remainder = positiveInteger%2;

        //printf("%d", remainder);
        result[i] = remainder;
        positiveInteger = quotient;
    }

    for(i=)
    
    return 0;
}