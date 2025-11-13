#include <stdio.h>

//Strings Q2 - caculate str length w/out using strlen()

//custom function mystrlen
int myStrLen(char str[])
{
	//length
	int length = 0;

	//while loop to calculate height, while the length is not 
	while( str[length] != '\0')
	{
		length++;
	}

	return length; //returns length after loop
}

//main
int main()
{
	//variables
	char myStr[50];
	int length;

	//takes in the input string
	printf("Enter string: ");
	scanf("%s", myStr);

	//length set by calling function
	length = myStrLen(myStr);

	//prints length
	printf("Length of \"%s\" is: %d\n", myStr, length);

	//end main
	return 0;
}


