#include <stdio.h>

//Enums Q2 - error codes enum (i chose 5 that i found were common)

//defines the enum for error codes
enum ErrorCode
{
    SUCCESS, //default is 0 for first, so:
    FILE_NOT_FOUND, //1
    PERMISSION_DENIED, //2
    INVALID_INPUT, //3
    OUT_OF_MEMORY //4
};

//function that simulates an operation and returns error code
enum ErrorCode simulateOperation(int opType)
{
	//uses switch case to determine response
	//no need for breaks statements since each one is return type
	switch(opType)
	{
        	case 1:
            		return SUCCESS;
        	case 2:
            		return FILE_NOT_FOUND;
        	case 3:
            		return PERMISSION_DENIED;
        	case 4:
            		return INVALID_INPUT;
        	case 5:
            		return OUT_OF_MEMORY;
        	default:
            		return INVALID_INPUT;
    	}
} //end error code function

//main
int main()
{
	int operation; //int for user operation input

	//asks user, scans in op int
    	printf("Enter operation type (1-5): ");
    	scanf("%d", &operation);

	//enum that that calls function from input op
	//this helps us check with switch case below for correct output
	enum ErrorCode result = simulateOperation(operation);

	//prints result withs swtich case, with appropriate line next to each one
	printf("Operation result: ");
    	switch(result)
	{
        	case SUCCESS:
            		printf("SUCCESS - Operation completed successfully\n");
            		break;
        	case FILE_NOT_FOUND:
            		printf("FILE_NOT_FOUND - The requested file was not found\n");
            		break;
        	case PERMISSION_DENIED:
            		printf("PERMISSION_DENIED - Access to the resource was denied\n");
            		break;
        	case INVALID_INPUT:
            		printf("INVALID_INPUT - The provided input was invalid\n");
            		break;
        	case OUT_OF_MEMORY:
            		printf("OUT_OF_MEMORY - Insufficient memory available\n");
            		break;
    	} //end switch

	//end main
    	return 0;
}
