//A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to generate the first n terms of the sequence.

#include <stdio.h>

int main() {
	
	int n;
	int i = 2;
	int first = 0;
	int second = 1;
	int current;

	printf("\n Enter n : ");
	scanf("%d", &n);

	printf("%d %d",first, second);
	while (i<=n) {
		current = first + second;
		printf(" %d",current);
		first = second;
		second = current;

		i++;
	}

	return 0;
}

/*OUTPUT
Enter n : 7
0 1 1 2 3 5 8 13*/