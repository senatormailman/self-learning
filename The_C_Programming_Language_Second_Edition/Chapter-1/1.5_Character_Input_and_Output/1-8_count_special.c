#include <stdio.h>

/*
 * Count newlines, blanks and tabs in input
 */

main()
{
	int c, nline, blank, tab;

	nline = 0;
	blank = 0;
	tab = 0;

	while (( c = getchar()) != EOF)
	{
		if ( c == '\n' )
			++nline;
		if ( c == ' ' )
			++blank;
		if ( c == '\t' )
			++tab;
	}
	printf("\nNewlines: %d\nBlanks: %d\nTabs: %d\n", nline, blank, tab);
}
