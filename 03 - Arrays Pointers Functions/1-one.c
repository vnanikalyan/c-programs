//a. Write a C program to find the minimum, maximum and average in an array of integers.

#include<stdio.h>

int main() {
    int n;
    int array;

    int min = 999999;
    int max = 0;
    
    printf("Enter number of integers that you would like to store - ");
    scanf("%d", &n);

    printf("\n Enter %d numbers - ", n); 
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++) {
        if(array[i] < min) {
            min = array[i];
        }

        if(array[i] > max) {
            max = array[i];
        }
    }

    printf("\n Maximum number - %d", max);
    printf("\n Minimum number - %d", min);
    printf("\n Average number - %d", min+max/n);
    
    return 0;
}