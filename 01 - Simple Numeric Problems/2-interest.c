//b. Write the program for the simple, compound interest.

#include<stdio.h>

//simple Interest: i = ptr/100

int main() {
    int principle, time, rateOfInterest;

    printf("\n Enter Principle : ");
    scanf("%d", &principle);

    printf("\n Enter time (No. of months) : ");
    scanf("%d", &time);

    printf("\n Enter rate of interest : ");
    scanf("%d", &rateOfInterest);

    int simpleInterest = (principle * time * rateOfInterest) / (100 * 12);
    printf("Simple interest - %d \n", simpleInterest);

    int compoundInterest = (principle * time * rateOfInterest) / (100 * 12);
    printf("Compound interest - %d \n", compoundInterest);

    return 0;
}

