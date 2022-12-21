//k. Write a program for reading elements using pointer into array and display the values using array.

#include <stdio.h>

void main() {
    int *ptr;
    int size;
    int i;

    printf("Enter the size of array - ");
    scanf("%d", &size);

    int arr[size];
    ptr = arr;

    printf("Enter %d elements - \n", size);
    for(i=0; i<size; i++) {
        scanf("%d", ptr++);
    }

    printf("The elements that you entered are - \n");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}