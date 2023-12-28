#include <stdio.h>

/* copy input to output; Print EOF status version
 * I decided to add some clarity in the prompt.
 */

main()
{
	int c;

	printf("Please input characters and then press RET:\n");

	printf("\nThe value of \"( getchar() != EOF )) is: %d\n", ( getchar() != EOF ));
}
