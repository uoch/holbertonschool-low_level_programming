#include "main.h"
/**
 * print_times_table - prints an n times table.
 * @n: integer input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');

		for (b = 1; b <= n; b++)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);

			c = a * b;

			if (c <= 9)
				_putchar(32);
			else if (c <= 99)
				_putchar((c / 10) + '0');
			else
			{
				_putchar((c / 100) + '0');
				_putchar((c % 100) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar(10);
	}
}
