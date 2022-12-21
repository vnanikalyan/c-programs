/*
d. Write a C program that does the following:
It should first create a binary file and store 10 integers, where the file name and 10
values are given in the command line. (hint: convert the strings using atoi function)
Now the program asks for an index and a value from the user and the value at that
index should be changed to the new value in the file. (hint: use fseek function)
The program should then read all 10 values and print them back.
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    printf("file name is %s \n", argv[1]);
    FILE *fpw = fopen(argv[1], "wb");
    int index;
    int value;

    if(argc == 1) {
        printf("Arguments are missing! \n");
        exit(1);
    }
    
    int i;
    for(i = 2; i<=11; i++) {        
        // printf("%s ", argv[i]);
        printf("%d ", atoi(argv[i]));
        putc(atoi(argv[i]), fpw);
    }

    printf("Enter index and value - ");
    scanf("%d%d", &index, &value);

    FILE *fpr = fopen("./a.out", "rb");
    int c;
    while((c=getc(fpr)) != EOF) {
        putchar(c);
    }

    fclose(fpw);
    fclose(fpr);
}