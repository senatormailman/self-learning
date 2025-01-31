#include <stdio.h>

/* This will be a histogram of character frequencies.
 * It will be leveraging wc along with the char limit.
 *
 * 26 letters and 10 integers. Weehaw. */

/* This ended up being an easier function than 1-13.
 * Just need to instantiate two arrays.
 * Pretty much followed exactly how wc worked from
 * the beginning example and added my histogram from 1-13.
 * I also used the char - 'initial char' trick with a - z. */

void main()
{
	int c, i, nc, state;
	int ndigit[10];
	int nchar[26];
	int looper;


	for (i = 0; i < 26; ++i)
		nchar[i] = 0;

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while (( c = getchar()) != EOF )
	{
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c >= 'a' && c <= 'z')
			++nchar[c-'a'];
	}
	for (i = 0; i < 9; ++i)
	{
		printf("\n%d | ", i);
		for(looper = 0; looper < ndigit[i]; ++looper)
		{
			printf(" * ");
		}
	}
	// This will probably go here
	
        for(i = 0; i < 26; ++i)
        {
                char c = 'a'+i;
                printf("\n%c | ", c);
		for (looper = 0; looper < nchar[i]; ++looper)
		{
			printf(" * ");
		}
        }


	printf("\n-------------------------------------------------------------------------------------------------");
	printf("\n     1   2   3   4   5   6   7   8   9  10  11  12  13\n");
}
