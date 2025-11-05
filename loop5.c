//loop 5 - check for palindrome
#include <stdio.h>

//main
int main()
{
	int num, origin;
	int reversed = 0;

	//prints to ask user for input and scans it
	printf("Enter a num: ");
	scanf("%d", &num);

	//sets original to num
	origin = num;

	//reverses number w/ while loop
	while( num!= 0)
	{
		//n%10 gets last digit, adds it to reverse*10 
		reversed = (reversed * 10) + (num%10);
		num /= 10; //divides num by 10, cuts off last digit
	}

	//checks if its a palindrone, if it matches origin w/ reverse
	if(origin == reversed)
	{
		printf("%d is indeed a palindrome.\n", origin);
	}
	else //if it doesnt match,says it doesn't:
	{
		printf("%d is not a palindrome.\n", origin);
	}

	return 0; //ends main
}
