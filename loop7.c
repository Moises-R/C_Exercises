//loop 7 c file - password validation
#include <stdio.h>
#include <string.h> //for string

//main
int main()
{
	//char array (since strings are char arrays in c) to hold 50 chars
	char pass[50];
	char correctPass[] = "correct_password";

	//do while for the password check
	do
	{
		//asks user input, scans
		printf("Enter password: ");
		scanf("%s", pass);

		//if they dont match (using strcmp to compare)
		if( strcmp(pass, correctPass) != 0)
		{
			//print incorrect output
			printf("Incorrect password.\n");
		}
	}
	while( strcmp(pass, correctPass) != 0);

	//once they get matching pass, it'll get 0, so go past the loop:
	//prints:
	printf("Access granted!\n");
	return 0;
}
