/*
c. Write a C program to count the number of times a character occurs in a text file. The
file name and the character are supplied as command line arguments.
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    FILE *fp;

    printf("%d \n", argc);
    printf("%s \n", argv[1]);
    printf("%s \n", argv[2]);

    if(argc == 1) {
        printf("Please proved filename and character!");
        exit(1);
    }

    fp = fopen(argv[1], "r");    

    int c;
    int cnt = 0;
    char nani;
    while((c=getc(fp)) != EOF) {
        nani = c;
        //printf("%s - %c\n", argv[2], nani);  

        if(nani == argv[2][0]) {
            cnt++;
        }
    }

    printf("%s is %d time in %s", argv[2], cnt, argv[1]);
    fclose(fp);
}