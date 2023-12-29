/* DO NOT RUN, READ BELOW */

#include <stdio.h>

#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

/* count lines, words, and characters in input */


/*
 * When I looked at this question, my immediate thought was to try and throw junk at the input and see what broke.
 * I assumed that it would be something about where the data would not be held in an int (overflow).
 *
 * Turns out, that's probably right. Clever way to have developers think about unit testing.
 * (I didn't come up with that thought, got that from the clever folk here: https://penti.org/~sederlok/misc/lang/c/the_c_programming_language_-_exercises/krx111.html )
 *
 * Speaking of that website, it seems as though the overflow is what they assumed as well. So I will try that!
 * Post testing: This did not break it... Let me try a bigger... BIGGER number...
 *
 * Post-post testing: Okay, I kept adding 6's until the code just hung. I guess that's a bug? If the string is TOO long, it will just... not work.
 *
 */

main()
{
	int i, c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	for ( i = 0; i < 6666666000; i++ )
	{
		c = 'a';
		++nc;
		if ( c == '\n' )
			++n1;
		if ( c == ' ' || c == '\n' || c == '\t' )
			state = OUT;
		else if ( state == OUT )
		{
			state = IN;
			++nw;
		}
	}


/*	state = OUT;
	n1 = nw = nc = 0;
	while (( c = getchar()) != EOF )
	{
		++nc;
		if ( c == '\n' )
			++n1;
		if ( c == ' ' || c == '\n' || c == '\t' )
			state = OUT;
		else if ( state == OUT )
		{
			state = IN;
			++nw;
		}
	}
*/	printf("%d %d %d\n", n1, nw, nc);
}
