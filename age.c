#include <stdio.h>

int main()
{
	//task 1 (regarding user's age, with if else if else statement depending on input
    	int age;

	//asks to enter age
    	printf("Enter your age: ");

	//checks for integer input to be valid with if:
	if (scanf("%d", &age) != 1)
	{
		printf("Invalid input. Please enter an integer.\n");
		return 1; //it exits here with the error code 1
	}

    	if (age < 0)
	{
        	printf("Invalid age entered.\n");
    	}
	else if (age >= 0 && age <= 12)
	{
        	printf("You're a child.\n");
    	}
	else if (age >= 13 && age <= 19)
	{
        	printf("You're a teenager.\n");
    	}
	else if (age >= 20 && age <= 64)
	{
        	printf("You're an adult.\n");
    	}
	else
	{
        	printf("You're a senior citizen.\n");
    	}


	return 0;
}
