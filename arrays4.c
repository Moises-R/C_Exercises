#include <stdio.h>

//arrays Q4 - printing unique elements

//main
int main()
{
	//variable n
	int n;

	//input for n
	printf("Enter the number of elements for your array: ");
	scanf("%d", &n);

	//array declaration with n elements
	int arrNum[n];

	//asks to enter integers with for loop
	printf("Enter %d integers:\n", n);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &arrNum[i]);
	}

	//nested for loop, outside to check with all other elements
	printf("Unique elements of the array: ");

	for(int i=0; i<n; i++)
	{
		//int for uniqueness (0 false, 1 true), default will be true unless we can find the same int
		int isUnique = 1;

		//2nd for loop to see if it has any other common elements
		for(int j=0; j<n; j++)
		{
			//compares elements, makes sure its not the same index
			if( (i != j) && (arrNum[i] == arrNum[j]) )
			{
				isUnique = 0; //sets it to false (0) since its not unique
				break; //stops once its found
			}
		} //end inner for

		//if unique will print it
		if(isUnique)
		{
			printf("%d ", arrNum[i]);
		}

	} //end outer for
	//space for formatting
	printf("\n");

	//end main
	return 0;
}
