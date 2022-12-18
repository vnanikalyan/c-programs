#include <stdio.h>

int factorial(int n){
    int result;
    if(n==1) {
        return 1;
    } else {
         result = factorial(n-1) * n;
    }
    return result;
}

void main() {
    printf("%d", factorial(4));
}