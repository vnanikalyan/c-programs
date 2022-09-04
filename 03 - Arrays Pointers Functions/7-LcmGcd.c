//The least common multiple (LCM) of two positive integers a and b is the smallest integer that is evenly divisible by both a and b. Write a C program that reads two integers and calls LCM (a, b) function that takes two integer arguments and returns their LCM. The LCM (a, b) function should calculate the least common multiple by calling the GCD (a, b) function and using the following relation: LCM (a, b) = ab / GCD (a, b)

#include <stdio.h>

int main() {

	int a;
	int b;
	
	int dividend;
	int divisor;
	int remainder;
	
	int gcd;
	int lcm;

	printf("\n Enter a, b :");
	scanf("%d%d", &a, &b);

	if(a < b) {
		dividend = b;
		divisor = a;
	} else {
		dividend = a;
		divisor = b;
	}

	remainder = dividend % divisor;

	while(remainder != 0) {
		dividend = divisor;
		divisor = remainder;
		remainder = dividend % divisor;		
	}

	gcd = divisor;

	lcm = (a*b) / gcd;

	printf("\n LCM of %d,%d is %d\n", a, b, lcm);

	return 0;
}

/*OUTPUT
Enter a, b : 32 5
LCM of 32,5 is 160*/