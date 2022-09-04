//Write a C program that reads two matrices and uses functions to perform the following: 1. Addition of two matrices 2. Multiplication of two matrices

#include <stdio.h>
#include <stdlib.h>

void multiplication(int r1, int c1, int r2, int c2, int x[][c1],int y[][c2]) {
	
	int i;
	int j;
	int k;
	int c[r1][c1];

	//Performing Addition
	for(i = 0; i < r1; i++)
		for(j = 0; j < c2; j++){
			c[i][j] = 0;
			for(k=0;k < c1;k++)
				c[i][j] = c[i][j] + x[i][k] * y[k][j];
		}

	//Printing the Result
	for(i = 0; i < r1; i++){
		for(j = 0; j < c2; j++)
			printf("\t %d",c[i][j]);
		printf("\n");
	}
}

void addition(int r1, int c1, int x[][c1],int y[][c1]) {
	
	int i;
	int j;
	int c[r1][c1];

	//Performing Addition
	for(i = 0; i < r1; i++)
		for(j = 0; j < c1; j++)
			c[i][j] = x[i][j] + y[i][j];

	//Printing the Result
	for(i = 0; i < r1; i++){
		for(j = 0; j < c1; j++)
			printf("\t %d",c[i][j]);
		printf("\n");
	}
}

int main() {

	int rows1;
	int cols1;

	int rows2;
	int cols2;

	int i;
	int j;
	int choice;

	printf("\n Enter the size of First matrix : ");
	scanf("%d%d",&rows1,&cols1);

	printf("\n Enter the size of Second matrix : ");
	scanf("%d%d",&rows2,&cols2);

	int a[rows1][cols1];
	int b[rows2][cols2];

	printf("\n Enter the numbers into first matrix : ");
	for(i = 0; i < rows1; i++)
		for(j = 0; j < cols1; j++)
			scanf("%d",&a[i][j]);

	printf("\n Enter the numbers into second matrix : ");		
	for(i = 0; i < rows2; i++)
		for(j = 0; j < cols2; j++)
			scanf("%d",&b[i][j]);

	printf("\n 1.Addition");
	printf("\n 2.multiplication");
	printf("\n Enter your choice : ");
	scanf("%d",&choice);
	switch(choice) {
		case 1: if(rows1 != rows2 || cols1 != cols2) {
					printf("\n Matrix addition is not possible.\n");
					exit(0);
				}
		        addition(rows1, cols1, a, b);
                break;

        case 2: if(rows2 != cols1) {
					printf("\n Matrix multiplication is not possible.\n");
					exit(0);
				}
        		multiplication(rows1, cols1, rows2, cols2, a, b);
                break;

        default : printf("\n Enter the right option.\n");
                  break;
	}

	return 0;
}

/*OUTPUT
Enter the size of First matrix : 2 2
Enter the size of Second matrix : 2 2
Enter the numbers into first matrix : 1 1 1 1
Enter the numbers into second matrix : 2 2 2 2
1.Addition
2.multiplication
Enter your choice : 1
   3   3
   3   3
Enter the size of First matrix : 2 3
Enter the size of Second matrix : 3 2
Enter the numbers into first matrix : 1 2 3 4 5 6
Enter the numbers into second matrix : 7 8 9 10 11 12
1.Addition
2.multiplication
Enter your choice : 2
    58   64
   139   154
   */