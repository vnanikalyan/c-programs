//a. Write a C program to display the contents of a file to standard output device.

#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    fp = fopen("./dummy-files/file-1.txt", "r");

    if(fp == NULL) {
        printf("Unable to find the file! \n");
        exit(1);
    }

    int c;
    while((c=getc(fp)) != EOF) {
        //putc(c);
        putchar(c);
    }    
}