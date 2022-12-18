/*
e. Write a C program to merge two files into a third file (i.e., the contents of the firs t file
followed by those of the second are put in the third file).
*/

#include <stdio.h>
#include <stdlib.h>

void main() {   
    FILE *fp_1 = fopen("./dummy-files/file-1.txt", "r");
    FILE *fp_2 = fopen("./dummy-files/file-1.txt", "r");
    FILE *fp_3 = fopen("./dummy-files/file-3.txt", "a");

    if(fp_1 == NULL || fp_2 == NULL) {
        printf("Files unavailable to read!");
        exit(1);
    }

    int c;
    while((c=getc(fp_1)) != EOF) {
        putc(c, fp_3);
    }
    
    putc('\n', fp_3);

    while((c=getc(fp_2)) != EOF) {
        putc(c, fp_3);
    }

    fclose(fp_1);
    fclose(fp_2);
}