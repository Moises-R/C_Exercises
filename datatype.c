#include <stdio.h>


//datatype.c file

//main
int main()
{
	//task 2: declare and initialize variables
	int oneInt = 1;
	float oneFloat = 3.14f;
	double oneDouble = 5.789;
	char oneChar = 'A';

	//print them
	printf("int: %d\n", oneInt);
	printf("float: %f\n", oneFloat);
	printf("double: %lf\n", oneDouble);
	printf("char: %c\n", oneChar);

	//task 3 (char initializations and ASCII values
	char char1 = 'a', char2 = 'b', char3 = 'c';
	char char4 = 'x', char5 = 'y', char6 = 'z';
	char char7 = 'A', char8 = 'B', char9 = 'C';
	char char10 = 'X', char11 = 'Y', char12 = 'Z';

	//print first part  (no ascii yet)
	printf("\nCharacters:\n");
	printf("Lowercase: %c %c %c %c %c %c\n", char1, char2, char3, char4, char5, char6);
	printf("Uppercase: %c %c %c %c %c %c\n", char7, char8, char9, char10, char11, char12);

	//ascii initialization
	char a1 = 97, a2 = 98, a3 = 99;
	char a4 = 120, a5 = 121, a6 = 122;
	char a7 = 65, a8 = 66, a9 = 67;
	char a10 = 88, a11 = 89, a12 = 90;

	//prints 2nd part (ascii values)
	printf("\nASCII Values\n");
	printf("Lowercase ASCII: %c %c %c %c %c %c\n", a1, a2, a3, a4, a5, a6);
	printf("Uppercase ASCII: %c %c %c %c %c %c\n", a7, a8, a9, a10, a11, a12);

	//task 4 (scientific numbers initialization, ex. of float+double and print
	float floatSci = 3.14e3f;
	double doubleSci = 1.23e-10;

	//printing both sci numbers
	printf("\nScientific Notation\n");
	printf("Scientific float: %e\n", floatSci);
	printf("Scientific double: %le\n", doubleSci);

	//task 5 (deciminal precisions with float)
	float preciseFloat =  1.12345678f; //8 digits after decimal
	printf("\nFloat Precision\n");
	printf("1 Decimal: %.1f\n", preciseFloat);
	printf("2 Decimal: %.2f\n", preciseFloat);
	printf("4 Decimal: %.4f\n", preciseFloat);
	printf("6 Decimal: %.6f\n", preciseFloat);

	//task 6 (print sizes of the variables)
	printf("\n Sizes of Data Types\n");
	printf("int size: %zu bytes\n", sizeof(int));
	printf("float size: %zu bytes\n", sizeof(float));
	printf("double size: %zu bytes\n", sizeof(double));
	printf("char size: %zu bytes\n", sizeof(char));

	return 0;
}

