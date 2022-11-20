#include "main.h"
/**
 * print_last_digit - Sign of number
 *@n - intert intger
 * Return: 0
 */
int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (mod < 0)
	{
		mod = mod * -1;
	}
	_putchar(mod + '0');
	return (mod);
}
