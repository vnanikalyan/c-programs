//a. Write a C program to convert a Roman numeral ranging from I to L to its decimal equivalent.

#include<stdio.h>
#include<string.h>

char getValue(char a) {
    char finalValue;

    switch(a) {
        case 'I': finalValue = 1;
                  break;
        case 'V': finalValue = 5;
                  break;
        case 'X': finalValue = 10;
                  break;
        case 'L': finalValue = 50;
                  break;
        default: finalValue = 0;
                 break;
    }
}

void main() {
    char romanString[100];
    printf("Enter Roman Numeral");
    scanf("%s", romanString);

    printf("%s \n",romanString);
    printf("%ld \n",strlen(romanString));
}