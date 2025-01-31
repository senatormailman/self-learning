#include <stdio.h>

/*
 * This will print Celsius to Fahrenheit in a table.
 * A simple adjustment to basically reverse the formula.
 *
 * for fahr = 0, 20, ... , 300 (floating point version)
 * 
 * Modified to include a table header.
 *
 * Exercise 1-15 version to modularize with functions.
 * I feel like this could be more modular, but I think
 * this gets the job done.
*/

int celsiusfahr(float celsius, int upper, int step);

int main()
{
	float celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* increment for table */

	/* Included table header */
	printf("%3s %8s\n", "C", "F");

	celsius = lower;
	celsiusfahr(celsius, upper, step);

}


int celsiusfahr(float celsius, int upper, int step)
{
	float fahr;
	while (celsius <= upper)
	{
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%3.0f %8.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
