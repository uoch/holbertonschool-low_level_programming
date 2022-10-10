#include "main.h"

/**
 * _puts - returns the length of a string
 * @str: string to find length of
 *
 * Return: length of s
 */
void _puts(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        _putchar(*str[i]);
        i++;
    }
    _putchar(10);
}
