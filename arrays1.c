#include <stdio.h>

//arrays1 - read and print array n elements

int main()
{
	int n;
	//asks for input
	printf("Enter number of elements in array: ");
	scanf("%d", &n);

	//array declaration with n size
	int arrayNum[n];

	//read elements with for loop
	printf("Enter %d integers for the array:\n", n);
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arrayNum[i]);
	}

	//prints array in original order with for loop
	printf("Elements in Array: ");
	for(int i =0; i < n; i++)
	{
		printf("%d", arrayNum[i]);
	}

	//space for formatting 
	printf("\n");

	printf("Array in reverse: ");

	//now prints array in reverse order (starting from n-1 to 0index)
	for(int i = n-1; i>= 0; i--)
	{
		printf("%d", arrayNum[i]);
	}

	//end main
	return 0;
}
