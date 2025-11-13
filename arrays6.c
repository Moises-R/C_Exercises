#include <stdio.h>

//arrays Q6 - delete elemtn from specified index

//main
int main()
{
	//variables
	int n, index;

	//asks for input to create the original array
	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arrNum[n]; //arr declaration with n indeces

	for(int i =0; i<n; i++)
	{
		scanf("%d", &arrNum[i]);
	}

	//asks which index they want to remove
	printf("Enter index to delete (0-%d): ", n-1); 
	scanf("%d", &index);

	//now, shifts elements to left since its getting removed
	for(int i=index; i<n-1; i++)
	{
		//this skips over the specified index and shifts
		arrNum[i] = arrNum[i+1];
	}

	//prints new array
	printf("Array after deleting value: ");
	for(int i=0; i<n-1; i++)
	{
		printf("%d ", arrNum[i]);
	}

	printf("\n"); //space

	//end main
	return 0;
}
