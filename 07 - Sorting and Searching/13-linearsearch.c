//Write a C program that uses non recursive function to search for a Key value in a given list of integers. Use linear search method.

#include <stdio.h>
#include <stdlib.h>

int main() {

	int key;
	int n;
	int i;
	int a[10];

	printf("\n Enter the size of the array : ");
	scanf("%d", &n);

	printf("\n Enter %d integers : ", n);
	for(i = 0; i < n; i++)
			scanf("%d", &a[i]);

	printf("\n Enter a value to be searched : ");
	scanf("%d", &key);

	for(i = 0; i < n; i++)
			if(key == a[i]) {
				printf("\n Key value is found at position 8.\n", i + 1);
				exit(0);
			}

	printf("\n Given key is not found in the list. \n");

	return 0;
}

/*OUTPUT
Enter the size of the array : 10
Enter 10 integers : 10 23 45 63 2 3 4 38 36 54
Enter a value to be searched : 4
Key value is found at position 8.*/