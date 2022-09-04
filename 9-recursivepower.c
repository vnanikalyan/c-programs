//Write C program that reads two integers x and n and calls a recursive function to compute xn

#include <stdio.h>

int power_func(int base, int power) {
	
	if(power != 0)
		return (base * power_func(base, power - 1));
	else
		return 1;
}

int main() {

	int x;
	int n;

	printf("\n Enter x and n : ");
	scanf("%d%d", &x, &n);

	printf("Pow(x,n) : %d \n",power_func(x,n));

	return 0;
}

/*OUTPUT
Enter x and n : 5 3
Pow(x,n) : 125*/