#include <stdio.h>

//enums Q1 - day of week from integer input

//enum for day, starting at monday =1
enum Day
{
	//the rest will follow after 1
	MONDAY = 1,
	TUESDAY, //2
    	WEDNESDAY, //3, etc
    	THURSDAY,
    	FRIDAY,
    	SATURDAY,
    	SUNDAY
};

//main
int main()
{
	//variables (int for day, enum)
    	int dayNumber;

	enum Day day; //to cast it to our enum

	//gets input for day number
    	printf("Enter a number (1-7): ");
    	scanf("%d", &dayNumber);

	//casts the enum to day
    	day = (enum Day)dayNumber;

	//switch case for day (1-7)
    	switch(day)
	{
		//prints each day from case
        	case MONDAY:
            		printf("Monday\n");
            		break;
        	case TUESDAY:
            		printf("Tuesday\n");
            		break;
        	case WEDNESDAY:
            		printf("Wednesday\n");
            		break;
        	case THURSDAY:
            		printf("Thursday\n");
            		break;
        	case FRIDAY:
            		printf("Friday\n");
            		break;
        	case SATURDAY:
            		printf("Saturday\n");
            		break;
        	case SUNDAY:
            		printf("Sunday\n");
            		break;
        	default: //if input not 1-7, says invalid
            		printf("Invalid day number!\n");
            		break;
    	}
	//end main
    	return 0;
}
