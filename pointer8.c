#include <stdio.h>

//pointer2 Q8 - pointers to structures

//Student struct w/ char array for name, and int age
struct Student
{
	char name[50]; //50 for max size
	int age;
};

//main
int main()
{
	//var for Student struct, contains memory for name and int
	struct Student myStudent = {"Moises", 20};
	//could've also used strcpy and .age^ but this is more efficient

	//declaring pointer to the struct
	//assigning it address of the var to it as well
	struct Student *ptr = &myStudent;

	//accessing and printing struct members with struct ptr op (->)
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);

	//end main
	return 0;
}


