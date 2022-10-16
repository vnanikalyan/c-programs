
#include <stdio.h>

void main() {
    int a;
    char b;
    float c;
    double d;

    printf("%s", "Hello World! \n");

    printf("%s", "1234 \n");
    printf("%s", "10.05 \n");    

    printf("%d \n", 10);     

    printf("size of int - %ld \n", sizeof(a));
    printf("size of char - %ld \n", sizeof(b));
    printf("size of float - %ld \n", sizeof(c));
    printf("size of double - %ld \n", sizeof(d));

    scanf("%d", &a);
    scanf(" %c", &b);
    scanf("%f", &c);
    scanf("%lf", &d);

    printf("%d \n", a);
    printf("%c \n", b);
    printf("%.2f \n", c);
    printf("%.2lf \n", d);   
}