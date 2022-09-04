//Write a C program to find the factorial of a positive integer

#include <stdio.h>

int main() {

	int number;
	int factorial = 1;

	printf("\n Enter a positive interger : ");
	scanf("%d", &number);

//Logic to find the Factorial of the given number
	while(number>0) {
		factorial = factorial * number;
		number = number - 1;
	}

	printf("\n Factorial of the given number is %d\n", factorial);
	return 0;
    }

/*
OUTPUT
    Enter a positive interger : 5
    Factorial of the given number is 120
*/