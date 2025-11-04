//loop 1 c file
#include <stdio.h>

//main
int main()
{
	int num, sum = 0; //ints

	//asks for user input
	printf("Enter positive ints (0 or negative num to stop):\n");

	//reads num 1 in digit format and &num
	scanf("%d", &num);

	//loop to add all pos ints entered, stops once <=0 entered
	while(num > 0)
	{
		sum += num; //sum updated
		scanf("%d", &num); //scans for int again
	}

	//prints the sum after loop ends
	printf("Sum: %d\n", sum);
	return 0; //return to end main
}
