//Write a C program that reads two integers and calls a recursive function to compute x^n value.

#include <stdio.h>

int ncr_func(int n, int r) {
	
	if(r == 0 || r == n)
		return 1;
	else
		return (ncr_func(n-1, r-1) + ncr_func(n-1, r));
	
}

int main() {

	int a;
	int b;

	printf("\n Enter a and b :");
	scanf("%d%d", &a, &b);

	printf("nCr : %d \n", ncr_func(a,b));

	return 0;
}

/*OUTPUT
Enter two integers : 6 3
ncr value = 20
*/