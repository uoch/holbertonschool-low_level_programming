#include "main.h"
/**
 * times_table - prints an n times table.
 *
 */
void times_table(void)
{
	int i, j

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar( i * j);
		}
	}
	_putchar(10);
}
