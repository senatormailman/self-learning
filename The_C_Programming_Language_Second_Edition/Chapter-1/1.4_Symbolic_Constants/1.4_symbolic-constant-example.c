#include <stdio.h>

/*
 * print Fahrenheit-Celsius table (in reverse!)
 *
 * I added the symbolic constants in this as an example.
 * Note how it makes understanding what is happening in the for loop easier!
 *
*/

#define LOWER	0	/* lower limit of table */
#define UPPER	300	/* upper limit */
#define STEP	20	/* step size */

main()
{
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
