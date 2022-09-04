//Write a C program to calculate the following Sum: Sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!

#include <stdio.h>
#include <math.h>

int fact(int n) {

	int f = 1;
	int i;

	for(i = 1; i <= n; i++)
		f = f * i;

	return f;
}

int main() {
	int x;
	double sum;

	printf("\n Enter x : ");
	scanf("%d", &x);

	sum = 1 - pow(x,2)/fact(2) + pow(x,4)/fact(4) - pow(x,6)/fact(6) + pow(x,8)/fact(8) - pow(x,10)/fact(10);

	printf("%lf", sum);

	return 0;
}

/*OUTPUT
Enter x : 2
-0.416155*/