#include <stdio.h>

/* This will be a histogram of word input in stdin.
 * It will be leveraging wc along with the char limit.
 *
 * Longest word is 45 letters. Giddyap. */

#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

main()
{
	int c, i, nc, state;
	int nword[45];
	int looper;

	state = IN;
	nc = 0;

	for (i = 0; i < 45; ++i)
		nword[i] = 0;

	while (( c = getchar()) != EOF )
	{
		++nc;
		if ( c == ' ' || c == '\n' || c == '\t' )
		{
			--nc;
			state = OUT;
		}
		if ( state == OUT )
		{
			state = IN;
			++nword[nc];
			nc = 0;
		}
	}
	if( nc > 0 )
		++nword[nc];
	for (i = 1; i < 45; ++i)
	{
		if( i < 10)
			printf("\n%d  | ", i);
		else
			printf("\n%d | ", i);
		for(looper = 0; looper < nword[i]; ++looper)
		{
			printf(" * ");
		}
	}
	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n        1   2   3   4   5   6   7   8   9  10  11  12  13\n");
}
