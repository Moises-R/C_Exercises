#include <stdio.h>

//typedef Q2- vector alias structure

//defines the Vector structure with the x,y,z doubles
//this makes it so we dont have to call it "struct Vector" later, just "Vector" for each vector
typedef struct
{
	double x;
	double y;
	double z;
} Vector; //name of alias as Vector

//function to add the two vectors from its parameters
Vector addVectors(Vector v1, Vector v2)
{
	//result vector
	Vector result;

	//calculates result by calling the struct
	//stores it by adding the respective vectores
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;

	return result; //returns answer
} //end function

//int main
int main(void)
{
	//vec1 declaration (from typedef Vector), and sum variable
	Vector vec1, vec2, sum;

	//asks for user input for 1st and 2nd vector sets
	//so, user will input 6 total of x,y,z format
	printf("Enter first vector (x y z): ");
    	scanf("%lf %lf %lf", &vec1.x, &vec1.y, &vec1.z);

	printf("Enter second vector (x y z): ");
	scanf("%lf %lf %lf", &vec2.x, &vec2.y, &vec2.z);

	//calculates sum by calling function
	sum = addVectors(vec1, vec2);

	//displays both sets of vectors, all rounded to .2 decimal
	printf("\nVector 1: (%.2f, %.2f, %.2f)\n", vec1.x, vec1.y, vec1.z);
	printf("Vector 2: (%.2f, %.2f, %.2f)\n", vec2.x, vec2.y, vec2.z);

	//also prints sum, all of which is calling .x, .y.,.z from the struct
	printf("Sum: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);

    return 0;
}
