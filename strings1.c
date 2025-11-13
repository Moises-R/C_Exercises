#include <stdio.h>
#include <string.h>

//strings Q1 - check palindrome

//main
int main()
{
	//variables
	char inputString[50]; //char array for string
	int length, isPalindrome; //length and bool

	//asks input for string
	printf("Enter string to check palindrome: ");
	scanf("%s", inputString);

	//sets length
	length = strlen(inputString);

	isPalindrome = 1; //sets default to true (1)

	//for loop to check for palindrome
	for(int i=0; i< length/2; i++)
	{
		//if that char is not equare to the other side of the string
		if( inputString[i] != inputString[length - 1 - i])
		{
			isPalindrome = 0; //set to false since its not palindrome
			break;
		}
	}

	//prints ouput in whether its palindrome or not
	if(isPalindrome)
	{
		printf("\"%s\" is a palindrome :)\n", inputString);
	}
	else
	{
		printf("\"%s\" is not a palindrome :(\n", inputString);
	}

	//end main
	return 0;
}
