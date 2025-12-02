#include <stdio.h>

//pointer Q1 - declaring and initializing pointers

int main()
{
	//part 1 of Q1 - declare int, char, and double variable
	int num = 7;
	char letter = 'J';
	double deci = 3.16;

	//part 2 of Q1 - declares pointers for each
	//assign address of the corresponding var to its pointer as well
	//int* basically means "pointer to an int", same for char, etc.
	//notation:  * = "value at address" and & = "address of"
	int *ptrNum = &num;
	char *ptrChar = &letter;
	double *ptrDeci = &deci;

	//part 3 - print values and address WITHOUT pointers
	//uses (void*) to use a generic pointer
	printf("Values and address without pointers:\n");
	printf("num = %d, address = %p\n", num, (void*)&num);
	printf("letter = %c, address = %p\n", letter, (void*)&letter);
	printf("decimal = %lf, address = %p\n", deci, (void*)&deci);

	//prints values and address WITH pointers
	printf("\nUsing pointesr:\n");
	printf("*ptrNum = %d, ptrNum = %p\n", *ptrNum, (void*)ptrNum);
	printf("*ptrChar = %c, ptrChar = %p\n", *ptrChar, (void*)ptrChar);
	printf("*ptrDeci = %lf, ptrDeci = %p\n", *ptrDeci, (void*)ptrDeci);

	//end main
	return 0;
}
