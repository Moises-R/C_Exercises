#include<stdio.h>

//function/recursion Q2 - sum of array ints with recursion

//recursive function that returns sum of array ints
int intSum(int numArr[], int size)
{
	//base case 1 (no elements in array, return nothing, sum as 0)
	if(size ==0)
	{
		return 0;
	}
	//base case 2 (if theres one element), return index 0 position
	if(size == 1)
	{
		return numArr[0];
	}

	//inductive step -> recursive call
	//adds current index with call to intSum with size-1
	return numArr[size-1] + intSum(numArr, size-1);
}

//main
int main(void)
{
	//int for array size for input and sum int
	int sum;
	int num;

	//gets input
	printf("Enter size of your array: ");
	scanf("%d", &num);

	//declare array with num size from user
	int userArr[num];

	printf("Now, enter values for your array below.\n");
	//asks user for array elements with for loop
	for(int i=0; i<num; i++)
	{
		printf("Enter value for position %d:", i);
		scanf("%d", &userArr[i]);
	}

	//calculates and prints sum of array with the function call
	sum = intSum(userArr, num);
	printf("Sum of array elements is: %d\n", sum);

	//end main
	return 0;
}

