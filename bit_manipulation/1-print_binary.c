
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar(n);
}
