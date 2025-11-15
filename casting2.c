#include <stdio.h>

//casting Q2 - showing truncation from double to int

//main
int main(void)
{
	//variables for int and double
	double doubleValue;
	int intValue;

	//user input for starting double value
	//%lf for double input (lf = "long float")
	printf("Enter a double value: ");
    	scanf("%lf", &doubleValue);


	//explicit type casting, where truncation occurs
	//the double gets all its decimals cut off, leaving just the int (no rounding)
	intValue = (int)doubleValue;

	//displays original value, then shows it after casting to int
	printf("\nOriginal double value: %.6lf\n", doubleValue); //did up to 6 decimal values (depends on input)
    	printf("After casting to int: %d\n", intValue);

	//end main
	return 0;
}
