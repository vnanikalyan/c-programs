//a. Write a C program to find the minimum, maximum and average in an array of integers.

#include<stdio.h>

void main() {
    int n;
    int array[10];
    int i;

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

    printf("Maximum number - %d \n", max);
    printf("Minimum number - %d \n", min);
    printf("Average number - %d \n", min+max/n);
}