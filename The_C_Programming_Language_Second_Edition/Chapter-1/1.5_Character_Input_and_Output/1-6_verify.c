#include <stdio.h>

/* copy input to output; 2nd version */

main()
{
	int c;

/*
 * This code will never end, the test expression:
 * 	getchar() != EOF
 * ALWAYS results with "1", which means that it will never end!
 */

	while (c = getchar() != EOF)
	{
		putchar(c);
		printf("%d", ( getchar() != EOF ));
	}
}
