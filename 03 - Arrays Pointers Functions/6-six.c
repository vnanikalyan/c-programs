//l. Write a program for display values reverse order from array using pointer.

#include <stdio.h>
void main() {
    int a[5] = {1,2,3,4,5};
    int i;

    int *ptr = a;

    for(i=4;i>=0;i--) {
        printf("%d ", *ptr--);
    }
}