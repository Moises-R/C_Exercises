#include <stdio.h>
#include <stdbool.h> //added for bool in task 4

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

	//task 3 - more operators (-=, +=, *=, /=, %=, &=, |=, ^=, >>=, <<=, etc.
	//setting a and b variables
	int a = 9;
	int b = 5;

	//trying operators
    	printf("Initial: a = %d, b = %d\n", a, b);

    	a += b;  // a = a + b
    	printf("After a += b: a = %d\n", a);

    	a -= b;  // a = a - b
    	printf("After a -= b: a = %d\n", a);

    	a *= b;  // a = a * b
    	printf("After a *= b: a = %d\n", a);

    	a /= b;  // a = a / b
    	printf("After a /= b: a = %d\n", a);

    	a %= b;  // a = a % b
    	printf("After a %%= b: a = %d\n", a);

    	a &= b;  // a = a & b (bitwise AND)
    	printf("After a &= b: a = %d\n", a);

    	a |= b;  // a = a | b (bitwise OR)
    	printf("After a |= b: a = %d\n", a);

    	a ^= b;  // a = a ^ b (bitwise XOR)
    	printf("After a ^= b: a = %d\n", a);

    	a >>= 1; // a = a >> 1 (right shift)
    	printf("After a >>= 1: a = %d\n", a);

    	a <<= 1; // a = a << 1 (left shift)
    	printf("After a <<= 1: a = %d\n", a);

	//task 4  -  using the given code snippet with assigning equivalent values (int to bool)
	bool isLoggedIn = true;
	bool isAdmin = false;

	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

	//now we use the equivalent bool values (1 for true, 0 for false)
	printf("\nBoolean Operations (using int equivalents)\n");
    	int isLoggedIn_int = 1;    // equivalent to true
    	int isAdmin_int = 0;       // equivalent to false

    	printf("Regular user: %s\n", (isLoggedIn_int && !isAdmin_int) ? "true" : "false");
    	printf("Has access: %s\n", (isLoggedIn_int || isAdmin_int) ? "true" : "false");
    	printf("Not logged in: %s\n", (!isLoggedIn_int) ? "true" : "false");

	//tastk 5 - given the variables, print results with && and ||
	int aNew = 1, bNew = 0, cNew = 1;
	printf("a = %d, b = %d, c = %d\n", aNew, bNew, cNew);
    	printf("a && b || c = %d\n", aNew && bNew || cNew);
    	printf("(a && b) || c = %d\n", (aNew && bNew) || cNew);
    	printf("a || b && c = %d\n", aNew || bNew && cNew);
    	printf("(a || b) && c = %d\n", (aNew || bNew) && cNew);
    	printf("!a && b = %d\n", !aNew && bNew);

	return 0;
}

