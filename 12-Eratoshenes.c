//Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user using Sieve of Eratosthenes algorithm.

#include <stdio.h>
#include <stdbool.h>

int main() {

       int n;
       int i;
       int j;

       printf("\n Enter n : ");
       scanf("%d", &n);

       bool prime[n+1];

       for(i = 0; i <= n; i++)
              prime[i] = true;

       for(i = 2; i<=n; i++)
              if(prime[i] == true)
                     for(j = 2; i*j<=n; j++)
                            prime[i*j] = false;

       for(i = 2;i <= n; i++)
              if(prime[i])
                     printf("%d ", i);

       printf("\n");

       return 0;
}

/*OUTPUT
Enter n : 30
2 3 5 7 11 13 17 19 23 29
*/