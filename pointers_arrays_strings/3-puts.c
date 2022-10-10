#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to find length of
 *
 * Return: void
 */
void _puts(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        _putchar(*(str + i));
        i++;
    }
    _putchar(10);
}
