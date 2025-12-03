#include <stdio.h>

//Pointer4 Q4 - pointers and arrays, print array elements

//main
int main()
{
	//declaring array of size 5 with values
	int arrNum[5] = {1, 2, 3, 4, 5};

	//now, will use a pointer to traverse array
	//printing each element using pointer arithmetic

	int *ptrArr = arrNum; //is the same as &arr[0] to start

	printf("Array elements with pointer arithmetic:\n");

	//loops through array
	for(int i=0; i < 5; i++)
	{
		//prints element with *(ptr + i) -> same as arrNum[i]
		//kinda like moving ptr "i times forward"
		printf("Element %d = %d\n", i, *(ptrArr + i));

		//could also have done ptr[i]
	}

	//line for formatting
	printf("\n");

	//end main
	return 0;
}
