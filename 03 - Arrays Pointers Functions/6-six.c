//l. Write a program for display values reverse order from array using pointer.

#include <stdio.h>
void main() {
    int *ptr;
    int size;
    int i;

    printf("Enter the size of array - ");
    scanf("%d", &size);

    int arr[size];
    ptr = &arr[size-1];

    printf("Enter %d elements - \n", size);
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements in reverse order are - \n");
    for(i=0; i<size; i++) {
        printf("%d ", *(ptr--));
    }

}