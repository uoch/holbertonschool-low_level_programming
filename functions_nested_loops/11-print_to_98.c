#include "main.h"

/**
 * print_to_98 - prints from any integer to 98
 * @n: integer input
 *
 * Return: void
 */

void print_to_98(int n)
{
	int d , e;

	while (n != 98)
	{
		d = n / 10;
		e = n % 10;
		_putchar(d);
		_putchar(e);
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar(10);
}
