#include <stdio.h>

/*
 * Count newlines, blanks and tabs in input
 */

main()
{
	int c, blank;

	blank = 0;

/*
 * This one is REALLY odd to get the logic around at first,
 * especially if you are trying to follow the limitations of what you should "know".
 *
 * Basically the logic is:
 * 	Is it a space? Check if it's the first space or an additional space.
 *	 	If additional space: Do nothing
 *	 	If first space: Print
 *	Is it just a char?
 *		Print char, return blank tally to 0. (This part I actually forgot! Whoops)
 */

	while (( c = getchar()) != EOF)
	{
		if ( c == ' ' )
		{
			if ( blank > 0 )
				;
			if ( blank == 0 )
				putchar(c);
			++blank;
		}
		if ( c != ' ' )
		{
			putchar(c);
			blank = 0;
		}
	}
}
