#include <stdio.h>
#include <stdarg.h> //for variable arg functions

//function/recursion Q4 - sumAll function

//sumAll function header with these requirements:
/*
- takes a variable number of integer passed to it
- the first arg is number of subsequent ints to sum
- e.g. sumAll(3, 10, 20, 30) --> 60
*/
int sumAll(int num, ...) //uses ... for following args (user will specify)
{
	//declares list to hold var arguments
	va_list args;

	//sum int to start at 0
	int sum = 0;

	//initializes va_list to access var args with num as count
	//count will say how many args to expect
	va_start(args, num);

	//loops through each var arg
	for(int i=0; i< num; i++)
	{
		//gets the next arg from list, and adds it to sum
		//then va_arg automatically moves on to next arg (thats how it works)
		sum += va_arg(args, int);
	}

	//va_list at its end after for loop
	va_end(args);

	//returns sum after it's calculated
	return sum;
}

//main
int main(void)
{
	//ints for results
	int result1, result2;

	//calls sumAll w/ 4 random numbers between 1-99
	//first arg (4) tells the function to expect 4 more nums (result=100)
	result1 = sumAll(4, 10, 20, 30, 40);
	printf("Sum of 4 numbers (10, 20, 30, 40): %d\n", result1);

	//calls sumAll again w/ 6 random numbers between 1-99
	//first arg (6) tells the function to expect 6 more nums (result=220)
	result2 = sumAll(6, 1, 3, 99, 27, 81, 9);
	printf("Sum of 6 numbers (1, 3, 99, 27, 81, 9): %d\n", result2);

	//end main
	return 0;
}
