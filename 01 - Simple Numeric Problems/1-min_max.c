// a. Write a program to find the max and min from the three numbers.

#include<stdio.h>

int main() {
    int number_1;
    int number_2;
    int number_3;
    int minimum;

    printf("\n Please Enter three numbers : ");
    scanf("%d%d%d", &number_1, &number_2, &number_3);

    if(number_1 > number_2 && number_1 > number_3) {
        printf("\n \n %d is the maximum", number_1);

        minimum = (number_2 < number_3) ?number_2 : number_3;        
    } else if(number_2 > number_1 && number_2 > number_3) {
        printf("\n %d is the maximum", number_2);

        minimum = (number_1 < number_3) ?number_1 : number_3;        
    } else {
        printf("\n %d is the maximum", number_3);

        minimum = (number_1 < number_2) ?number_1 : number_2;        
    }
    
    printf("\n %d is the minimum \n", minimum);
    return 0;
}