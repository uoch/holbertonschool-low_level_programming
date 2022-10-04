#include "main.h"
/**
 * _islower - check for lowercase characters.
 * @c: character check.
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
	return (0);
}