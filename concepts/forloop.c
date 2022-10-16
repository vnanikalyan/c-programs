
#include <stdio.h>

void main() {

    //Print Hello world 10 times
    int i;
    for(i=0; i<10; i++) {
        printf("hello World \n");
    }

    //Print 1 to 10
    for(i=1; i<=10; i++) {
        printf("%d ", i);
    }

    printf("\n");
    //Print 10 to 1
    for(i=10; i>=1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    //Print even number till 10
    for(i=2; i<=10; i=i+2) {
        printf("%d ", i);
    }

    printf("\n");

    //Print odd numbers till 9
    for(i=1; i<=9; i=i+2) {
        printf("%d ", i);
    }

    printf("\n");
}

/*Explanation
iteration1 :: i=1 --> 1 <= 10 --> 1
iteration2 :: i=2 --> 2 <= 10 --> 2
iteration3 :: i=3 --> 3 <= 10 --> 3
iteration4 :: i=4 --> 4 <= 10 --> 4
....
i=9 --> 9 <= 10 --> 9
i=10 --> 10 <= 10 --> 10
i=11 --> 11 <= 10 --> false
*/