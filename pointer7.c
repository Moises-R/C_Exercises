#include <stdio.h>

//Pointers1 Q7 - copy string with pointers

//function to copy contents of one string to another
//takes in 2 pointer chars from string inputes
void copy(char *dest, char *src)
{
	//ptr for src to loop through and copy
	char *srcPtr = src;

	//ptr for destination char to copy to
	char *destPtr = dest;

	//while loop for all of src length
	while( *srcPtr != '\0')
	{
		//copies from stc to dest with *
		*destPtr = *srcPtr;

		//moves on by adding 1 to both src and dest pointers
		srcPtr++;
		destPtr++;
	}

	//since destStr is newly copied, needs null terminator at end
	*destPtr = '\0';
}

//main
int main()
{
	//strings for src and det
	char sourceStr[100], destinationStr[100];

	//asks user for source string
	printf("Enter a source string to copy: ");
	scanf("%s", sourceStr);

	//calls copy
	copy(destinationStr, sourceStr);

	//prints copied string with destinationStr
	printf("Copied string = %s\n", destinationStr);

	//end main
	return 0;
}
