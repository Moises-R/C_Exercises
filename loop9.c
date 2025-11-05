//loop 9 c file - primes in range
#include <stdio.h>

//main
int main()
{
	//ints for start
	int start, end, isPrime; //also one for isPrime

	//scans input for start and end of range
	printf("Enter start of range: ");
	scanf("%d", &start);
	printf("Enter end of range: ");
	scanf("%d", &end);

	//ensures start range is set to 2 if less than 2
	if(start < 2)
	{
		//sets it to 2 to start
		start = 2;
	}

	//print to say range
	printf("Prime numbers between %d and %d: ", start, end);

	//outer loop checks nums in range
	for(int i=start; i<= end; i++)
	{
		//assumes num is prime (1) true, 0 false
		isPrime = 1;

		//checks its divisibility within that num
		for(int j=2; j*j <=i; j++)
		{
			if(i%j ==0)//if it is a divisor
			{
				isPrime = 0; //set to not prime (0)
				break;
			}
		} //end inner for
		//checks isprime wth i after the loop with &&
		if( isPrime && i > 1)
		{
			printf("%d ", i);
		}
	} //end outer for

	//line for readibility
	printf("\n");

	//end main
	return 0;
}
