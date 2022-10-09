/*
g. Write C programs that use both recursive and non-recursive functions
- To find the factorial of a given integer.
- To find the GCD (greatest common divisor) of two given integers.
- To find x^n
*/

#include<stdio.h>

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