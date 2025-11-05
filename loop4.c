//task 4 for loop4.c file  - fibonacci sequence
#include <stdio.h>

//main
int main()
{
	//ints for the sequence
	int n, sum;
	int current = 0, next = 1;

	//user input for n, number of terms
	printf("Enter n terms for Fibonacci sequence: ");
	scanf("%d", &n);

	//states the sequence
	printf("Fibonacci Sequence: ");

	//while loop to go from i to n
	int i=0;
	while(i < n)
	{
		printf("%d ", current); //prints current

		//calculates next fib number
		sum = current + next;
		current = next; //moves to next num
		next = sum;  //update sum

		i++; //updates i
	}

	printf("\n"); //for readibility

	return 0; //ends main
}

