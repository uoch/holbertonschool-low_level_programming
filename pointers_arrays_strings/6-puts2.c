#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
void puts2(char *str)
{
    int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}