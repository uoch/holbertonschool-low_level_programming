#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet complete 10 times.
 */

void print_alphabet_x10(void)
{
	int j, i;

	for (i = 0; i <= 9; i++)
	{
	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar(10);
	}
}