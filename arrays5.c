#include <stdio.h>

//arrays Q5 -  inserts a new element into an existing array 
//does this at a specified index

//main
int main()
{
	int n, index, value;  //variables needed

	//input for num elements
	printf("Enter num of elements in your array: ");
	scanf("%d", &n);

	int arrNum[n+1]; //declares arr with n+1 for new object later

	//asks input for integers in array
    	for (int i = 0; i < n; i++) 
	{
        	scanf("%d", &arrNum[i]);
    	}

	//asks for index to insert
	printf("Enter the position to insert new element (0-%d): ", n);
	scanf("%d", &index);

	//i believe theres no error checking based on what i asked Dr. Fitzgerald
	//so, im going to assume the user types a valid position

	//asks for input of element to enter
	printf("Enter value to put into array: ");
	scanf("%d", &value);

	//shifts elements to right from i to index
	//this ensures all positions are placed correctly after insertion
	for(int i=n; i > index; i--)
	{
		arrNum[i] = arrNum[i-1];
	}

	//inserts the new value at specified index
	arrNum[index] = value;

	//prints the new array with insertion
	printf("Array after inserted value: ");
	for(int i=0; i < n+1; i++)
	{
		printf("%d ", arrNum[i]); //prints each one
	}
	//space
	printf("\n");

	//end main
	return 0;
}
