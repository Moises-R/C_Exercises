#include <stdio.h>

//arrays Q7 -  matrix multiplication
//takes 2 square matrices then multiples them

//main
int main()
{
	//variable for size of the square matrices
	int n;

	//input for n
	printf("Enter size of the square matrices: ");
	scanf("%d", &n);

	//2D array declarations for 3
	int arrOne[n][n], arrTwo[n][n], arrThree[n][n];

	//reads first matrix
	printf("Enter elements of first matrix size %dx%d: \n", n, n);

     	for(int i = 0; i < n; i++)
	{
        	for(int j = 0; j < n; j++)
		{
            		scanf("%d", &arrOne[i][j]); //enters values to arr1
        	}
    	}

    	// Read second matrix
    	printf("Enter elements of second %dx%d matrix:\n", n, n);
    	for(int i = 0; i < n; i++)
	{
        	for(int j = 0; j < n; j++)
		{
            		scanf("%d", &arrTwo[i][j]); //enters values to arr2
        	}
    	}

    	// Initialize result matrix to zero
    	for(int i = 0; i < n; i++)
	{
        	for(int j = 0; j < n; j++)
		{
            		arrThree[i][j] = 0; //all zeroes to start for arr3
        	}
    	}

    	//Matrix multiplication for the values into 3rd array
    	for(int i = 0; i < n; i++)
	{
        	for(int j = 0; j < n; j++)
		{
            		for(int k = 0; k < n; k++)
			{
				//updates each index from the product
				//use += since thats how matrix mult. works
                		arrThree[i][j] += arrOne[i][k] * arrTwo[k][j];
            		}
        	}
    	}

    	// Print result matrix with new values
    	printf("Result matrix:\n");
    	for(int i = 0; i < n; i++)
	{
        	for(int j = 0; j < n; j++)
		{
            		printf("%d ", arrThree[i][j]);
		}
		printf("\n"); //adds line for matrix display
	}

	return 0; //end maun
}
