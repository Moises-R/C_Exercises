#include<stdio.h>

//function/recursion Q3 - GCD algorithm

//recursive function for GCD
int gcd(int a, int b)
{
	//base case: if b is 0, gcd returns a
	//this means remainder of a,b was zero, so we've reached the end
	if( b==0)
	{
		return a;
	}
	//inductive step:
	//recursive call to return b, and a modulus b
	//follows equation: gcd(a,b) = gcd(b, a mod b)
	return gcd(b, a%b);
}

//main
int main(void)
{
	//int variables for 4 integer user inputs of 2 pairs
	int num1, num2, num3, num4;

	//input for first 2 num input
	printf("Enter first pair of numbers (a b): ");
	scanf("%d %d", &num1, &num2);

	//calculates and shows GCD for pair #1, and prints it
	int result1 = gcd(num1, num2);
	printf("GCD of %d and %d is: %d\n", num1, num2, result1);

        //input for second 2 num input
        printf("Enter second pair of numbers (a b): ");
        scanf("%d %d", &num3, &num4);

        //calculates and shows GCD for pair #2, and prints it
        int result2 = gcd(num3, num4);
        printf("GCD of %d and %d is: %d\n", num3, num4, result2);

        //end main
	return 0;
}

