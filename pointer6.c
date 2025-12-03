#include <stdio.h>

//Pointers1 Q6 - string length w/ pointers

//function length that outputs string length with pointer arithmetic
//uses char array (since string is char array) pointer called s
int length(char *s)
{
	//start pointer declaration for 1st char of string
	char *start = s;

	int length = 0; //int for length to return later

	//while value of start pointer doesnt equal null terminator (which indicates string end)
	while(*start != '\0')
	{
		length++; //adds 1 to length
		start++; //moves on to next char from start char
	}

	return length; //returns final length after loop
}

//main
int main()
{
	//string for input
	char myStr[100];

	//gets input from user for string
	printf("Enter a string: ");
	scanf("%s", myStr);

	//prints length and calls length method to do so
	printf("The length of your string is: %d\n", length(myStr));

	//end main
	return 0;
}
