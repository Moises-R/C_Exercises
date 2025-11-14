#include <stdio.h>

//strings Q3 - count each char occurence

//main
int main()
{
	//string declaration (char arr)
	char myStr[50];

	//input to get user string
	printf("Enter a string: ");
	scanf("%s", myStr);

	//parallel arrays and unique count
	//this is for countArr, uniqueArr and count
	char uniqueChars[100];
	int counts[100] = {0};
	int uniqueCount = 0; 

	//loops through each char in input string
	for(int i=0; myStr[i] != '\0'; i++)
	{
		//goes until myStr is empty
		char currentChar = myStr[i];
		//bool for if it already exists
		int alreadyExists = 0; 

		//for loop to check if its unique
		//this will scan the rest of input string
		for (int j=0; j < uniqueCount; j++)
		{
			//compares currChar with uniquehcars
			if (uniqueChars[j] == currentChar)
			{
				//sets alr exists to true
				alreadyExists = 1;
				counts[j]++; //adds to count
				break;
			}
		} //end inner for

		//if its new char, add to uniqueArr
		if (!alreadyExists)
		{
			uniqueChars[uniqueCount] = currentChar;
			counts[uniqueCount] = 1; //first occurs
			uniqueCount++; //increments count
		}
	} //end outer for


	//prints result
	printf("Occurences for characters:\n");
	for (int i=0; i<uniqueCount; i++)
	{
		//prints the counts
		printf("'%c': %d\n", uniqueChars[i], counts[i]);
	}

	//end main
	return 0;
}
