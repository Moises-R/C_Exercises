#include <stdio.h>

//typedef Q1 - usin Integer as alias, with int calculations

//defines Integer as an alias for int
//(e.g. for double, an alias could be "Decimal")
typedef int Integer;

//main
int main(void)
{
	//uses the alias to declare 5
	//2 for the ints, 3 for the arithmetic
	Integer a, b, sum, difference, product;

	///asks user to input 2 ints
	printf("Enter two integers.\n");
	printf("Enter first num:\n");
    	scanf("%d", &a);

 	printf("Enter second num:\n");
        scanf("%d", &b);

    	//does 3 arithmetic operations
	//adding, subtracting, multiplying
    	sum = a + b;
    	difference = a - b;
    	product = a * b;

	//prints header then both nums back to user
	printf("\nUsing typedef Integer (alias for int data type):\n");
    	printf("Num 1 = %d\n", a);
    	printf("Num 2 = %d\n", b);

	//now it displays the arithmetic operations 
    	printf("Sum: %d\n", sum);
    	printf("Difference: %d\n", difference);
    	printf("Product: %d\n", product);

	//end main
	return 0;
}
