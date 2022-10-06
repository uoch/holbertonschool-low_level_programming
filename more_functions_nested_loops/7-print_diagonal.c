#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: length of diagonal
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int a , b;
	if (n <= 0)
	{
		_putchar(10);
			}
	for (a = 0 ; a < n ; a++)
	{
		for ( b = 0; b < a; b++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar(10);
		}
		_putchar(10);
	}
}
