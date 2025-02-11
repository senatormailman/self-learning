#include <stdio.h>

/*
 * This will print Fahrenheit to Celsius in a table
 *
 * for fahr = 0, 20, ... , 300 (floating point version)
 * 
 * Modified to include a table header.
 *
 * Related to 1-15_celsius-fahr.c, but reversed process.
 * Could be better, but not too sure how to yet.
*/

int fahrcelsius(float fahr, int upper, int step);

int main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* increment for table */

	/* Included table header */
	printf("%3s %8s\n", "F", "C");

	fahr = lower;
	fahrcelsius(fahr, upper, step);
}

int fahrcelsius(float fahr, int upper, int step)
{
	float celsius;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %8.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
