#include <stdio.h>

//vending machine c file

//main
int main()
{
    	//choice variable
    	int choice;

	//prints menu with prices
    	printf("Vending Machine\n");
    	printf("1. Soda - $1.50\n");
    	printf("2. Water - $1.00\n");
    	printf("3. Chips - $2.00\n");
    	printf("4. Candy - $1.25\n");
	printf("Enter your selection (1-4): ");

    	//uses scanf to read user input with the & for choice variable
	scanf("%d", &choice);

	//switch case  to determine choice based in selection for ranges
    	switch(choice)
	{
        	case 1:
            		printf("You selected: Soda - $1.50\n");
            	break;
        	case 2:
            		printf("You selected: Water - $1.00\n");
            	break;
        	case 3:
            		printf("You selected: Chips - $2.00\n");
            	break;
        	case 4:
            		printf("You selected: Candy - $1.25\n");
            	break;
        	default:
            		printf("Invalid selection.\n");
            	break;
    	}

	return 0;
}
