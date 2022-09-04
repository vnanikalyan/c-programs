//Write a C program to determine if the given number is a prime number or not.

#include <stdio.h>

int main() {
	
	int n;
	int i;
	int cnt = 0;

	printf("\n Enter an integer : ");
	scanf("%d", &n);

	for(i = 1; i <= n ; i++)
		if(n%i == 0)
			cnt++;

	if(cnt == 2)
		printf("\n %d is a prime number. \n", n);
	else
		printf("\n %d is not a prime number. \n", n);

	return 0;
}

/*OUTPUT
Enter an integer : 5
5 is a prime number.*/