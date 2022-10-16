/*
a. Write a menu driven C program that allows a user to enter n numbers and then choose
between finding the smallest, largest, sum, or average. The menu and all the choices
are to be functions. Use a switch statement to determine what action to take. Display
an error message if an invalid choice is entered.
*/

#include <stdio.h>

int findsmallestnumber(int arr[100], int n) {    
    int smallest = 99999;
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    return smallest;
}

int findlargestnumber(int arr[100], int n) {
    int largest = 0;
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }    

    return largest;
}

int findsumofnumbers(int arr[100], int n) {
    int sum = 0;
    int i;
    for(i=0; i<n; i++) {
        sum += arr[i];
    }

    return sum;  
}

int findaverageofnumbers(int arr[100], int n) {
    int sum = 0;
    int i;
    for(i=0; i<n; i++) {
        sum += arr[i];
    }
    int average = sum/n;
    return average;
}

void main() {
    int n;
    int i;
    int arr[100];
    int option;
    
    printf("Enter n - ");
    scanf("%d", &n);

    printf("\n Enter %d numbers - ", n);
    for(i=0; i< n; i++) {
        scanf("%d", &arr[i]);
    }

    for(;;) {
        printf("\n");
        printf("Press 1 to find the smallest number \n");
        printf("Press 2 to find the largest number \n");
        printf("Press 3 to find the sum of the numbers \n");
        printf("Press 4 to find the average of the numbers \n");
        printf("Press 5 to exit the menu \n");
        printf("Enter your option - ");
        scanf("%d", &option);

        switch(option) {
            case 1: int smallest = findsmallestnumber(arr, n);
                    printf("%d is the smallest number \n", smallest);
                    break;

            case 2: int largest = findlargestnumber(arr, n);
                    printf("%d is the largest number \n", largest);
                    break;

            case 3: int sum = findsumofnumbers(arr, n);
                    printf("Sum of numbers = %d \n", sum);
                    break;

            case 4: int average = findaverageofnumbers(arr, n);
                    printf("Average of numbers = %d \n", average);
                    break;

            case 5: exit(0);

            default: printf("Invalid option selected. Please choose from the options given.");
                     break;
        }
    }
}