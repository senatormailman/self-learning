#include <stdio.h>

/*
 * Count newlines, blanks and tabs in input
 */

main()
{
	int c;

/* Same limitation as before:
 * 	I COULD just use an "else" here, but I won't.
 */

	while (( c = getchar()) != EOF)
	{
		if ( c == '\t' )
			printf("\\t");
		if ( c == '\b' )
			printf("\\b");
		if ( c == '\\' )
			printf("\\\\");
		if ( c != '\t')
			if ( c != '\b' )
				if ( c != '\\')
					putchar(c);
	}
}
