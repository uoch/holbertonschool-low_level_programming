#include "main.h"
/**
 * print_times_table - prints an n times table.
 * @n: integer input
 *
 * Return: void
 */
void print_d(int i)
{
	int b = 1;

	while (i / b >= 10)
		b *= 10;
	while (b > 0)
	{
		putchar('0' + (i / b));

		i %= b;
		b /= 10;
	}
}

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

			c = a * b;
			print_d(c);
		}
		_putchar(10);
	}
}
