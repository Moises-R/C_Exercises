#include <stdio.h>

//unions Q1 - data uion (int, float, char) showing its memory/purpose

//union Data declared
union Data
{
	//each value for int, float, and char defined
	int i_value;
	float f_value;
    	char c_value;
};

//main
int main(void)
{
	//data union variable declared (use this to call later)
	union Data data;

	//dispalys size of union data (bytes) with %lu (for unsigned long ints)
	//also uses sizeOf call to get size of data
	printf("Size of union Data: %lu bytes\n\n", sizeof(union Data));

	//stores and accesses int, shows its memory, int at value
	//alsouses void* to get data from %p
    	data.i_value = 67;
    	printf("Stored integer: %d\n", data.i_value);
    	printf("Memory address: %p\n", (void*)&data);
    	printf("Integer value at address: %d\n\n", data.i_value);

	//stores and accesses float I chose
	//int is now corrupted since now we're writing to float
    	data.f_value = 0.67f;
    	printf("Stored float: %.2f\n", data.f_value);
    	printf("Memory address: %p\n", (void*)&data);
    	printf("Float value at address: %.2f\n", data.f_value);
    	printf("Integer value now (corrupted): %d\n\n", data.i_value);

	//Store and access char, with its mem address, char value, float, int value
	//now that we're on char, both float & int have been corrupted
	//this is cause the others become valid, thats how union works basically
    	data.c_value = 'A';
    	printf("Stored character: %c\n", data.c_value);
    	printf("Memory address: %p\n", (void*)&data);
    	printf("Character value at address: %c\n", data.c_value); //char value
    	printf("Float value now (corrupted): %.2f\n", data.f_value); //2 decimal round
    	printf("Integer value now (corrupted): %d\n\n", data.i_value);

	//here i wrote my explanations, did line by line for easier readiblity from code
	//i find the differences between struct and union interesting as well
	//but i think i find struct more useful/applicable than union.
	printf("Memory Explanations\n");
	printf("Union uses shared memory for all members, in contrast to struct's varied memories.\n");
	printf("Also, only 1 member can hold a value at a time, not all at once like struct for instance.\n");
	printf("size of the union is also size of largest member (%.lu bytes)\n", sizeof(union Data));
    	printf("all the members start at the same memory address since they share it.\n");
    	printf("when I wrote to one member, others became invalid since it focuses on one at a time.\n");

	//end main
	return 0;
}
