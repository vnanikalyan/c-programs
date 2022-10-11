// b. Write the program for the simple, compound interest.

#include <stdio.h>
#include <math.h>

int main() {
    float principleAmt;
    float time;
    float roi;
    float compoundingFrequency;

    printf("\n Enter principle Amount, time (in months), rate of interest : ");
    scanf("%f%f%f",&principleAmt, &time, &roi);

    //calculating simple interest
    float simpleInterest = principleAmt * time * roi / (100 * 12);
    printf("Simple Interest = %.2f \n", simpleInterest);

    //calculating compound interest
    printf("\n Enter the compounding frequency - ");
    scanf("%f", &compoundingFrequency);

    float temp_1 = pow(1 + roi/(100 *compoundingFrequency), compoundingFrequency * time/12);
    float compoundInterest = (principleAmt * temp_1) - principleAmt;
    printf("Compound Interest = %.2f \n", compoundInterest);

    return 0;
}