
#include<stdio.h>

void main() {
    //Greatest of two numbers 23 35
    int number_1;
    int number_2;
    char alphabet;

    printf("\n Please enter two numbers : ");
    scanf("%d%d", &number_1,&number_2);

    
    //First showed using if else then using ternary operator
    int max = (number_1 > number_2) ? number_1 : number_2;
    printf("%d is the greatest! \n", max);    

    //Vowel or consonant
    printf("\n Enter an alphabet - ");
    scanf(" %c", &alphabet);

    
(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') ?
      printf("\n Its a vowel \n") : printf("\n Its a consonent \n");

}