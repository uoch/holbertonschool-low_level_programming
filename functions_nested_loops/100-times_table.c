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
	int b = 1;

	for (a = 0; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			_putchar(44);
			_putchar(32);
			c = a * b;
			while (c / b >= 10)
				b *= 10;
			while (b > 0)
			{
				putchar('0' + (c / b));

				c %= b;
				b /= 10;
			}
			_putchar(10);
		}
	}
}
