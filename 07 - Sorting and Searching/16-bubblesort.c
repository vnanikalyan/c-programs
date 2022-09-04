//Write a C program that implements the Bubble sort method to sort a given list of integers in ascending order.

#include <stdio.h>

int main() {
	
	int i;
	int j;
	int t;
	int n;

	printf("\n Enter n : ");
	scanf("%d", &n);

	int a[n];

	printf("\n Enter %d numbers : ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(i=0; i < n-1; i++)
		for(j=0; j < n-i-1; j++)
			if(a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		
	printf("\n After Sorting : ");
	for(i = 0; i < n; i++)
		printf("%d ",a[i]);

	return 0;
}

/*OUTPUT
Enter n : 7
Enter 7 numbers : 7 6 5 4 3 2 1
After Sorting : 1 2 3 4 5 6 7
*/