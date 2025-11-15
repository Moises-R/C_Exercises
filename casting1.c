#include <stdio.h>

//casting Q1 - showing int and float casting

//main
int main(void)
{
	//int, float vars
	int intValue;
	float floatValue;

	//prompts user for integer and stories it
	printf("Enter an integer: ");
	scanf("%d", &intValue);

	//casts int to float with (float)
	floatValue = (float)intValue;

	//prints both original int and after it is casted to float to show difference
	printf("\nOriginal integer value: %d\n", intValue);
	printf("After casting to float: %.2f\n", floatValue);

	//casting explanation that makes sense to me (i find it basically the same as java's)
	//if i just did 5/2 for example, it would give 2 (due to integer rounding)
	//but if it was float(5)/2, it would cast 5 to 5.0, so it'd be 2.5, more precise

	//end main
	return 0;
}
