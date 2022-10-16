//f. Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include<stdio.h>

void main() {
    int n;
	int i;
    int j;
	int cnt;

	printf("\n Enter a number till which you want the prime numbers to be printed : ");
	scanf("%d", &n);

	for(j = 1; j <= n ; j++) {
        cnt = 0;

        for(i = 1; i <= j ; i++) {
            if(j%i == 0) {
                cnt++;
            }			
        }

        if(cnt == 2) {
            printf("%d \n", j);
        }
    }
    
}