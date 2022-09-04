//Write a C program that uses non recursive function to search for a Key value in a given sorted list of integers. Use binary search method.

#include <stdio.h>
#include <stdlib.h>

int main() {

	int key;
	int n;
	int i;
	int first;
	int last;
	int mid;
	int a[10];

	printf("\n Enter the size of the array : ");
	scanf("%d", &n);

	printf("\n Enter %d integers in the ascending order : ", n);
	for(i = 0; i < n; i++)
			scanf("%d", &a[i]);

	printf("\n Enter a value to be searched : ");
	scanf("%d", &key);

	first = a[0];
	last = a[n-1];
	mid = (first + last) / 2;

	while(first <= last) {
		if(key == a[mid]) {
			printf("\n Element found at position %d. \n", mid + 1);
			exit(0);
		}
		else if(key < a[mid])
			last = mid - 1;
		else if(key > a[mid])
			first = mid + 1;
		else
			mid = (first + last) / 2;			
	}
			
	printf("\n Given key is not found in the list. \n");

	return 0;
}

/*OUTPUT
Enter the size of the array : 7
Enter 7 integers in the ascending order : 10 20 30 40 50 60 70
Enter a value to be searched : 30
Element found at position 3.*/