#include "main.h"

/**
 * print_rev - prints a string in stdout
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
        i++;
    while (i != j)
    {
        _putchar(*(s + j));
		j++;
        j = i-1;
    }
    
}
