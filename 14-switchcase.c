//Write a menu-driven C program that allows a user to enter n numbers and then choose between finding the smallest, largest, sum, or average. The menu and all the choices are to be functions. Use a switch statement to determine what action to take. Display an error message if an invalid choice is entered.

#include <stdio.h>
#include <stdlib.h>

int smallest(int array[], int size) {
	
	int i;
	int least = array[0];

	for(i = 0 ; i < size; i++)
			if(array[i] < least)
				least = array[i];

	return least;
}

int largest(int array[], int size) {
	
	int i;
	int large = array[0];

	for(i = 0 ; i < size; i++)
			if(array[i] > large)
				large = array[i];

	return large;
}

int sum(int array[], int size) {
	
	int i;
	int total = 0;

	for(i = 0 ; i < size; i++)
			total = total + array[i];

	return total;
}

int average(int array[], int size) {

	int i;
	int total = 0;

	for(i = 0 ; i < size; i++)
			total = total + array[i];

	return (total/size);
}

void menu(int n[], int arraysize) {

	int choice;

	printf("\n Menu : ");
	printf("\n 1.Smallest");
	printf("\n 2.Largest");
	printf("\n 3.Sum");
	printf("\n 4.Average");
	printf("\n 5.Exit");
	printf("\n Enter your Choice : ");
	scanf("%d", &choice);

	switch(choice) {
		case 1:	printf("\n Smallest number in the given list : %d \n", smallest(n, arraysize));
				break;

		case 2: printf("\n Largest number in the given list : %d \n", largest(n, arraysize));
				break;

		case 3: printf("\n Sum of the given list : %d \n", sum(n, arraysize));
				break;

		case 4:	printf("\n Average of the given list : %d \n", average(n, arraysize));
		 		break;

		case 5: exit(0);

		default : printf("\n Please enter the right choice. \n");
	}
}

int main() {

	int n;
	int i;

	printf("\n Enter n : ");
	scanf("%d", &n);

	int a[n];

	printf("\n Enter %d numbers : ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < n; i++)
		printf("%d ", a[i]);	

	while(1) 
		menu(a,n);

	return 0;
}

/*OUTPUT
Enter n : 5
Enter 5 numbers : 10 20 30 40 50

Menu :
1.Smallest
2.Largest
3.Sum
4.Average
5.Exit
Enter your Choice : 3

Sum of the given list : 150

Menu :
1.Smallest
2.Largest
3.Sum
4.Average
5.Exit
Enter your Choice : 5
*/
