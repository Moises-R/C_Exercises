#include <stdio.h>

//Arrays Q2 - copy array

//main
int main()
{
	//n variable
	int n;

	//input for n
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	//int arrays for copyfrom and copyto
	int copyFrom[n], copyTo[n];

	//read copyfrom array for loop
	printf("Enter %d ints for the first array:\n", n);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &copyFrom[i]);
	}

	//array to copy it to with for loop
	for(int i=0; i<n; i++)
	{
		copyTo[i] = copyFrom[i];
	}

	//now it prints both arrays
	printf("First array contents: ");
	for(int i=0; i<n; i++)
	{
		printf("%d", copyFrom[i]);
	}

	//space for formatting
	printf("\n");

	printf("Second copy array contents: ");
	for(int i=0; i<n; i++)
	{
		printf("%d", copyTo[i]);
	}
	//space for formatting
	printf("\n");

	//end main
	return 0;
}
