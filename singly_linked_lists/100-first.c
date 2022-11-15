#include <stdio.h>
#include "lists.h"
/**
 * tortue - Prints a string before the
 *        main function is executed.
 */
void tortue(void) __attribute__((constructor));
void tortue(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
