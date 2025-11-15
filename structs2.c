#include <stdio.h>
#include <math.h> //for math uses below (abs value,etc)

//Structs Q2 - Point struct (x,y) with distance calculation

//point stuct declaration
struct Point
{
	//variables for x, y as double for precision
	double x;
	double y;
};

//funtion that takes the 2 points structs as args
//will calculate the distance between them
double findDistance(struct Point p1, struct Point p2)
{
	//doubles for distance and p2,p1 calculations
	double diffX, diffY, distance;

	//substracts each point's x and y from each other
	//this is used in the distance formula
	diffX = p2.x - p1.x;
	diffY = p2.y - p1.y;

	//distance calculation from formula
	distance = sqrt( (diffX*diffX) + (diffY*diffY) );
	//can use sqrt from math.h above
	//also multipled diffX,Y for the square of them

	//returns the answer from calculation
	return distance;

} //end function

//main
int main(void)
{
	//structs for Points 1 and 2
	struct Point point1, point2;
	double distance; //distance var

	//user input for 1st coordinations, stored in above vars
	printf("Enter coordinates of first point (x y): ");
	scanf("%lf %lf", &point1.x, &point1.y);

	//same thing, user input for 2nd pair of coordinates stored also
    	printf("Enter coordinates of second point (x y): ");
    	scanf("%lf %lf", &point2.x, &point2.y);

	//distance calls the function to calculate it
	distance = findDistance(point1, point2);

	//final display of the points & their respective distance
	//prints doubles to 2 decimal values(.2f) for rounding
	printf("\nPoint 1: (%.2f, %.2f)\n", point1.x, point1.y);
	printf("Point 2: (%.2f, %.2f)\n", point2.x, point2.y);
    	printf("Distance between points: %.2f\n", distance);

	//end main
    	return 0;
}

