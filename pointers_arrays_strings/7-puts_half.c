#include "main.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
    	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	return (i);
    j = i/2;
    while (j != i)
    {
        _putchar(*(str + i));
        j++;
    }
}
