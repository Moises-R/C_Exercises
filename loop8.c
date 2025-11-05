//loop 8 c file - sum of squares of digits

#include <stdio.h>

//main
int main()
{
	int num, digit, sum = 0;

	//user scan for input
	printf("Enter a number: ");
    	scanf("%d", &num);

    	int original = num;

    	// Process each digit using while loop
    	while (num != 0)
	{
        	digit = num % 10;    //uses last digit
        	sum += digit * digit;   //updates sum to digit squared
        	num /= 10;   //remove last digit by /10
   	}

	//prints the squares of the digits (its sum)
    	printf("Sum of the squares of the digits of %d is %d\n", original, sum);
	//end main
    	return 0;
}
