#include <stdio.h>

//arithmetic.c file for Operators section

int main()
{

	//Task 2 - difference between x++ and ++x
	printf("\nIncrement and Decrement Operators\n");

	//variable x
	int x = 0;

	//print x and x++
    	printf("Before: x = %d\n", x);
    	printf("Using x++: %d\n", x++);  //uses current value, THEN increment
    	printf("After: x = %d\n", x);

	//set x to 0
	x = 0;

	//print x and ++x 
	printf("Before: x = %d\n", x);
    	printf("Using ++x: %d\n", ++x);  //increments x FIRST, then uses x value
    	printf("After: x = %d\n", x);

	//now, the same for x-- and --x:

	//set to 0 again
	x = 0;

	//print x and x--
	printf("Before: x = %d\n", x);
    	printf("Using x--: %d\n", x--);  //uses current x value, THEN x decrements
    	printf("After: x = %d\n", x);

	//set x to 0 again
	x = 0;

	//print x and --x
	printf("Before: x = %d\n", x);
    	printf("Using --x: %d\n", --x);  //decrements x FIRST, then uses x value
    	printf("After: x = %d\n", x);

	return 0;
}
