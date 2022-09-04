//Write a C program to construct a pyramid of numbers.

#include <stdio.h>

int main() {

	int n;
	int i;
	int j;
	int k;

	printf("\n Enter n : ");
	scanf("%d", &n);

	for(i = 1; i <= n ; i++) {
		for(k = 1; k <= n - i; k++)
			printf(" ");
		for(j = 1; j <= i ; j++)
			printf("%3d", i);
		printf("\n");
	}

	return 0;
}

/*OUTPUT
Enter n : 5
     1
   2 2
   3 3 3
  4 4 4 4
5 5 5 5 5*/