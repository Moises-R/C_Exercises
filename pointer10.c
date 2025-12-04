#include <stdio.h>

//pointer2 Q10 - function returning a pointer

//function, compares 2 nums (through int args)
//returns a pointer to largest one
int* compareNums(int *a, int *b)
{
	//if statement to compare size, gets value with *
	if(*a >= *b) //uses >= in case they're equal, just returns one of them
	{
		return a; //returns a's address
	}
	else
	{
		return b; //b is largest
	}
}

//main
int main()
{
	//ints to get user input
	int num1, num2;

	//asks for user input
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	//ptrs for each one in case i need to do
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	//sets largePtr to the method with both nums called
	int *largerPtr = compareNums(&num1, &num2);

	//prints larger value with * getting value
	printf("The larger value is: %d\n", *largerPtr);

	//end main
	return 0;
}
