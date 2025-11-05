//loop 6 c file - factorial
#include <stdio.h>

//main
int main()
{
	//ints for factorial and input num
	int num = 0;
	int factorial = 1;

	printf("Enter positive integer: ");
	scanf("%d", &num);

	//for loop to calculate factorial
	for(int i = 1; i <= num; i++)
	{
		//updates sum
		factorial *= i;
	}

	//print the factorial 
	printf("The factorial of %d is %d\n", num, factorial);

	//end main
	return 0;
}
