#include <stdio.h>

//Pointer1 Q3 - basic arithmetic with sum calculations

//main
int main()
{
	//ints to input later and for sum
	int num1, num2, sum;

	//gets user input for int values
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	//calculates sum with pointers
	//first declares pointer ints
	int *ptrNum1 = &num1;
	int *ptrNum2 = &num2;

	//adds both calling *num to get the value
	sum = *ptrNum1 + *ptrNum2;

	//prints sum
	printf("Sum: %d\n", sum);

	//end main
	return 0;
}
