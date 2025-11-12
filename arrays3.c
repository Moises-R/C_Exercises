#include <stdio.h>

//arrays Q3 - separate even and odd numbers into 2 arrays

int main()
{
	//vars for n, even and odd counts
	int n, numEven = 0, numOdd = 0;

	//asks for n input
	printf("Enter the number of elements for your array: ");
	scanf("%d", &n);

        //arrays
        int arrayNum[n], even[n], odd[n];

	//for loop to read array then separate based on even/odd
	//checks with modulus 2 to see if theres a remainder or not
	printf("Enter %d integers for array:\n", n);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &arrayNum[i]);
		//checks here for even:
		if( arrayNum[i] % 2 == 0)
		{
			//adds to even array and increases count
			even[numEven] = arrayNum[i];
			numEven++;
		}
		else
		{
			//if not even, will be odd:
			odd[numOdd] = arrayNum[i];
			numOdd++;
		}
	}//end for loop

	//prints the arrays
	printf("Even numbers: ");
	for(int i=0; i< numEven; i++)
	{
		//prints each index
		printf("%d ", even[i]);
	}

	//space
	printf("\n");

	//same thing for odd:
        printf("Odd numbers: ");
        for(int i=0; i< numOdd; i++)
        {
                //prints each index
                printf("%d ", odd[i]);
        }

	//space for formatting
	printf("\n");

	//end main
	return 0;
}

