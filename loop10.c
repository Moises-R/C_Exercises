//loop 10 c file - pattern printing w/ nested loops
#include <stdio.h>

//main
int main()
{
	//variables
	int num = 0;

	//scans and takes input
	printf("Enter number of rows: ");
	scanf("%d", &num);

	//nested for loop to print the pyramid of stars
	for(int i=1; i<= num; i++)
	{
		//second loop, ensures to print leading spaces
		for(int j=1; j<= num-i; j++)
		{
			printf(" "); //space added
		}

		int stars = 2 * i - 1;  //this is the closed form formual for pyramid
		//for loop to print the stars
		for(int k=1; k <= stars; k++)
		{
			//prints star
			printf("*");
		}

		//moves to next line after each row is printed
		printf("\n");
	}

	//ends main
	return 0;
}
