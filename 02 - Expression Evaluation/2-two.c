/*
b. Write a C program, which takes two integer operands and one operator from the user,
performs the operation and then prints the result. (Consider the operators +,-,*, /, %
and use Switch Statement)
*/

#include<stdio.h>

void main() {
      int operand1;
      int operand2;
      char operator;
      int result;
      
      printf("Enter two integer operands - ");
      scanf("%d%d", &operand1,&operand2);

      printf("Enter an operator - ");
      scanf(" %c", &operator);

      switch(operator) {
        case '+' : result = operand1 + operand2;
                   break;
        case '-' : result = operand1 - operand2;
                   break;
        case '*' : result = operand1 * operand2;
                   break;
        case '/' : result = operand1 / operand2;
                   break;
        case '%' : result = operand1 % operand2;
                   break;
        default: printf("Invalid Operator. Valid operators are + , -, *, /, %%");
                 break;        
      }

      printf("Result - %d \n", result);
}