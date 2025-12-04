#include <stdio.h>
#include <stdlib.h> //for malloc & free

//pointer2 Q9 - dynamic memory allocation

//main
int main()
{
	//ints for user input
	int length;

	//gets input
	printf("Enter number of elements: ");
	scanf("%d", &length);

	//malloc to dynamically allocate memory for length
	int *arrPtr = malloc(length * sizeof(int));

	//checks if ptr is null for allocation failure
	if( arrPtr == NULL)
	{
		//prints failure and ends program by returning 1
		printf("Memory allocation failure.\n");
		return 1;
	}

	//asks user for each element and uses loop
	printf("Enter %d integers:\n", length);
	for(int i=0; i<length; i++)
	{
		//uses arrPtr + i to iterate each element address
		scanf("%d", arrPtr + i);
	}

	//now searches for max element, starts with 1st element as max
	int max = *arrPtr; //since *arrPtr is first by default

	//loops through array, starts at index 1 to compare
	for(int i = 1; i < length; i++)
	{
		//checks if current index is greater than max
		//where current value is pulled from *(arrPtr + i)
		if (*(arrPtr + i) > max)
		{
			//new max set to current index value
			max = *(arrPtr + i);
		}
	}

	//prints max value after loop
	printf("Max value of array = %d\n", max);

	//frees the allocated memory, required when using malloc
	free(arrPtr);
	//also researched more and i found setting ptr to null after is good practice
	arrPtr = NULL;

	//end main
	return 0;
}
