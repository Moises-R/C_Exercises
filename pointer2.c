#include <stdio.h>

//Pointer1 Q2 - swapping values (call by reference)

//swap function (2 int pointers as args) to swap those ints' values
void swap(int *a, int *b)
{
	int temp = *a; //temp var to store a value (using *a)
	*a = *b; //a's value now set to b's value
	*b = temp; //b's value set to temp,which is a's value
}

//main
int main()
{
	//2 ints declared
	int num1 = 6;
	int num2 = 7;

	//prints original values before swap
	printf("Original values:\n");
	printf("Num1: %d, Num2: %d\n", num1, num2);

	//calls swap, then prints values after
	swap(&num1, &num2); //used & to get address
	printf("\nSwapped values:\n");
	printf("Num1: %d, Num2: %d\n", num1, num2);

	//end main
	return 0;
}


