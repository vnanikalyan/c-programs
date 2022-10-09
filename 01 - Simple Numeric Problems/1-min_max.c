//a. Write a program for fiend the max and min from the three numbers.

#include<stdio.h>

int main() {
    int first_number;
    int second_number;
    int third_number;
    
    printf("%s \n", "Enter three numbers: ");
    scanf("%d%d%d", &first_number, &second_number, &third_number);
    
    if(first_number > second_number && first_number > third_number) {
        printf("%d is greater among %d, %d, %d \n", first_number, first_number, second_number, third_number);
    } else if(second_number > first_number && second_number > third_number) {
        printf("%d is greater among %d, %d, %d \n", second_number, first_number, second_number, third_number);
    } else {
        printf("%d is greater among %d, %d, %d \n", third_number, first_number, second_number, third_number);
    }

    return 0;
}