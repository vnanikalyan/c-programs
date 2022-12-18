/*
b. Write a C program which copies one file to another, 
replacing all lowercase characters with their uppercase equivalents.
*/

#include <stdio.h>
#include <ctype.h>

void main() {
    FILE *fp_read;
    fp_read = fopen("./dummy-files/file-1.txt", "r");

    FILE *fp_write;
    fp_write = fopen("./dummy-files/file-2.txt", "w");

    int c;
    while((c=getc(fp_read)) != EOF) {
        putc(toupper(c), fp_write);
    }

    fclose(fp_read);
    fclose(fp_write);
}