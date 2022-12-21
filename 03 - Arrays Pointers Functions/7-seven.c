//m. Write a program through pointer variable to sum of n elements from array.

#include <stdio.h>

void main() {
    int n;
    int i;
    int sum = 0;

    printf("Enter the size of array - ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("\n Enter %d elements - ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);        
    }

    for(i=0;i<n;i++) {
        sum += *(ptr++);
    }

    printf("sum - %d \n", sum);
}