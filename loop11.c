//loop 11 c file - ATM menu simulation
#include <stdio.h>

//main
int main()
{
	//int for choice and double for the balance, as well as double amount
	int choice;
	double balance = 1000.0;
	double amount;

	//do while to show menu at least once before going through cases
	do
	{
		printf("\nATM Menu\n");
        	printf("1. Check Balance\n");
        	printf("2. Deposit\n");
        	printf("3. Withdraw\n");
        	printf("4. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

		//now, uses switch case to check choice for 1-4
		switch(choice)
		{
			//all of the following go thru each test case
			case 1:
			{
				printf("Your balance is $%.2f\n", balance);
				break;
			}
			case 2:
			{
				//prints deposit amount and checks if its valid
				printf("Enter deposit amount: ");
                		scanf("%lf", &amount);
                		if (amount > 0)
				{
                    			balance += amount;
                    			printf("Deposit successful. Your new balance is $%.2f\n", balance);
                		}
				else
				{
                    			printf("Invalid amount.\n");
                		}
                		break;
			}
            		case 3:
			{
				//same but for withdrawal cases
		                printf("Enter withdrawal amount: ");
              			scanf("%lf", &amount);
               			if (amount > 0 && amount <= balance) 
				{
                    			balance -= amount;
                    			printf("Withdrawal successful. Your new balance is $%.2f\n", balance);
                		}
				else if (amount > balance)
				{
                    			printf("Insufficient funds.\n");
                		}
				else
				{
                    			printf("Invalid amount.\n");
                		}
                		break;
			}
            		case 4: //user has chosen to exit
                	{
				printf("Thank you for using the ATM!\n");
                		break;
			}

            		default: //any other input is invalid
			{
				printf("Invalid choice. Please try again.\n");
				break;
        		}
    		}
		}
		while (choice != 4); //as long as input is not 4
		
		//exits
		return 0;
}
