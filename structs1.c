#include <stdio.h>
#include <string.h>

//structs Q2 - student name, rollnum, and marks displayed
//this will be done using an array of Student structs

//student struct declaration
struct Student
{
	//variables for student from assignment
	char name[50];
    	int roll_number;
    	float marks;
};

//main
int main(void)
{
	//int for size and i for for loop
	int num, i;
	//struct declaration arr named students
    	struct Student students[50];

	//asks user input for student num
	printf("Enter number of students: ");
    	scanf("%d", &num);

    	//for loop to read student details
	//goes from index 0 up to max student num (from input)
    	for (i = 0; i < num; i++)
	{
		//asks for input, and puts into array
		//calls it with students[i].attribute
		//also deos i+1 for student since i is index (1 behind actual student)
        	printf("\nStudent %d:\n", i + 1);
        	printf("Enter name: ");
        	scanf("%s", students[i].name);
        	printf("Enter roll number: ");
        	scanf("%d", &students[i].roll_number);
        	printf("Enter marks: ");
        	scanf("%f", &students[i].marks);
    	}

    	//displays student details, with header
    	printf("\nStudent Details\n");

	//for loop to go through each student and display attributes stored from previous input
    	for (i = 0; i < num; i++)
	{
        	printf("\nStudent %d:\n", i + 1);
        	printf("Name: %s\n", students[i].name);
        	printf("Roll Number: %d\n", students[i].roll_number);
        	printf("Marks: %.2f\n", students[i].marks);
    	}

	//end main
 	return 0;
}
