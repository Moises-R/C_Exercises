//Q3 - number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //these are for the random generator

//main
int main()
{
	//NOTE: i dont remember if we ever learned how to do random num
	//so i researched it and i found out how to do it using seed

	//ints for random num and guess
	int randNum, guessNum = 0;

	//seed random genrator with time
	srand(time(NULL));
	randNum = rand() % 20 + 1; // this goes from 1-20 rand num

	//print line for game
	printf("Guess the number between 1 and 20!\n");

	//do while bc we need to execute it once before checking
	do
	{
		//getting input
		printf("Enter number to guess (1-20): ");
		scanf("%d", &guessNum);

		//if else chain to check if its higher/lower, etc
		if (guessNum < randNum)
		{
			printf("Higher!\n"); //prints higher for <rand
		}
		else if(guessNum > randNum)
		{
			printf("Lower!\n"); //prints lower for >rand
		}
		else
		{
			printf("Correct!\n"); 
		}
	}
	while (guessNum != randNum);

	return 0; //end main
}
