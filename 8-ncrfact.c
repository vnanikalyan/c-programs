//Write a C program that reads two integers n and r to compute the ncr value using the following relation: (n, r) = n! / r! (n-r)! . Use a function for computing the factorial value of an integer.

#include <stdio.h>

int fact(int n) {
	int f = 1;
	int i;

	for(i = 1; i <= n; i++)
		f = f * i;
	return f;
}

int main() {

	int n;
	int r;
	int result;

	printf("\n Enter two integers : ");
	scanf("%d%d", &n, &r);

	result = fact(n) / (fact(r) * fact(n-r));

	printf("\n ncr value = %d \n", result);

	return 0;
}

/*OUTPUT
Enter two integers : 6 3
ncr value = 20*/