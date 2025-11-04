//loop 2 file - multiplication table
#include <stdio.h>

//main
int main()
{
	//int for input for num
	int num = 0;

	//asks for input
	printf("Enter positive num: ");

	//user input with &num
	scanf("%d", &num);

	//since length is known, for loop up to 10 num for mult table:
	for(int i=1; i<=10; i++)
	{
		///printing each line of mult. table 
		printf("%d * %d = %d\n", num, i, num*i);
	}

	//end main
	return 0;
}

