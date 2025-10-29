#include <stdio.h>

int main()
{
	//task 1 (regarding user's age, with if else if else statement depending on input
    	int age;

    	printf("Enter your age: ");
    	scanf("%d", &age);

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
