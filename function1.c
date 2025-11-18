#include<stdio.h>

//function/recursion 1 - factorial function

//factorial function with long long return type
//this is due to high num potential that an int couldnt normally hold
long long factorial(int n)
{
	//base case (checks if n is 1 or 0)
	if ( (n==1) || (n==0) )
	{
		//return 1 since 0! and 1! = 1
		return 1;
	}
	else //inductive step (recursive)
	{
		//n! = n*(n-1)! factorial equation call
		return n * factorial(n-1);
	}
} //end factorial

int main(void)
{
	//variable for input and result
	int num;
	long long answer;

	//asks user input for valid integer
	printf("Enter a non-negative integer: ");
	scanf("%d", &num);

	//again, we were told not to error check
	//so i assume user put in valid int

	//calls function and displays the factorial
	answer = factorial(num);
	//uses %lld for long long type
	printf("The factorial of %d is %lld\n", num, answer);

	//end main
	return 0;
}
