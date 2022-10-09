/* Write program that declares Class awarded for a given percentage of marks, where
mark <40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >=
70% = Distinction. Read percentage from standard input. */

#include <stdio.h>

int main() {
    int percentage;    
    
    printf("%s \n", "Please Enter your percentage : ");
    scanf("%d", &percentage);

    if(percentage < 40) {
        printf("%s \n", "Failed");
    } else if(percentage >=40 && percentage < 60) {
        printf("%s \n", "Second class");
    } else if(percentage >=60 && percentage < 70) {
        printf("%s \n", "First class");
    } else if(percentage >=70 && percentage <= 100) {
        printf("%s \n", "Distinction");
    } else {
        printf("%s \n", "Invalid percentage entered. Please enter the values between 1 and 100.");
    }

    return 0;
}