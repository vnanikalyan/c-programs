//a. Write a program for fiend the max and min from the three numbers.

#include<stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);
    
    if(firstNumber > secondNumber && firstNumber > thirdNumber) {
        printf("%d is greater among %d, %d, %d \n", firstNumber, firstNumber, secondNumber, thirdNumber);
    } else if(secondNumber > firstNumber && secondNumber > thirdNumber) {
        printf("%d is greater among %d, %d, %d \n", secondNumber, firstNumber, secondNumber, thirdNumber);
    } else {
        printf("%d is greater among %d, %d, %d \n", thirdNumber, firstNumber, secondNumber, thirdNumber);
    }

    return 0;
}