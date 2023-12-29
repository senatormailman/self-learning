#include <stdio.h>

#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

/* 
 * count lines, words, and characters in input
 * THEN print each word on a new line!
 * This technically works, but I am not certain as to how I would actually separate the output in text.
 */
main()
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while (( c = getchar()) != EOF )
	{
		++nc;
		if ( c == '\n' )
			++n1;
		if ( c == ' ' || c == '\n' || c == '\t' )
		{
			state = OUT;
			printf("\n");
		}
		else if ( state == OUT )
		{
			state = IN;
			putchar(c);
			++nw;
		}
	}
	printf("%d %d %d\n", n1, nw, nc);
}
