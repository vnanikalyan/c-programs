//Write a C program that uses a recursive function to solve the Towers of Hanoi problem.

#include <stdio.h>

void tower_of_hanoi(int x, int from, int to, int aux) {
	
	if (x == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", from, to);
        return;
    }
    
    tower_of_hanoi(x-1, from, aux, to);
    printf("\n Move disk %d from rod %c to rod %c", x, from, to);
    tower_of_hanoi(x-1, aux, to, from);
}

int main() {

	int n;

	printf("\n Enter number of disks : ");
	scanf("%d", &n);

	tower_of_hanoi(n,'A','C','B');
	printf("\n");

	return 0;
}

//OUTPUT