#include <stdio.h>

/*
 * This will print Celsius to Fahrenheit in a table.
 * A simple adjustment to basically reverse the formula.
 *
 * for fahr = 0, 20, ... , 300 (floating point version)
 * 
 * Modified to include a table header.
*/

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* increment for table */

	/* Included table header */
	printf("%3s %8s\n", "C", "F");

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%3.0f %8.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
