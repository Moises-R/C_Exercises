#include <stdio.h>

//Pointer1 Q5 - reversing an array with pointers

//function that takes int pointer to array 1st value and size as input
void reverse(int *arr, int size)
{
	//start and end pointers, one for 1st element (arr)
	int *start = arr;
	//end pointer adds size from arr -1 for index adjustement
	int *end = arr + size - 1;

	//while loop when start is less than end
	while (start < end)
	{
		//swap, so needs temp var for start
		int temp = *start;
		*start = *end; //uses * to get/set value
		*end = temp;
		//start moves on and end decreases (moves towards middle)
		start++;
		end--;
	} //end loop
}

//main
int main()
{
	//declare int arr with values
	int arrNum[5] = {1, 2, 3, 4, 5};

	//shows original array with loop
	printf("Original array: ");
	for(int i=0; i<5; i++)
	{
		printf("%d ", arrNum[i]);
	}
	printf("\n");

	//calls reverse function with arrNum
	reverse(arrNum, 5);

	//prints reversed array
	printf("Reversed array: ");
	for(int i=0; i<5; i++)
	{
		printf("%d ", arrNum[i]);
	}
	//format space
	printf("\n");

	//end main
	return 0;
}
