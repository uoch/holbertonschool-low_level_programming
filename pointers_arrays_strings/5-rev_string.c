#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
    int i = 0, j = 0;
    char str[500];

    while (s[i] != '\0')
    {
        *(str + i) = *(s + i);
        i++;
    }
    i = i - 1;
    while (i >= 0)
    {
        *(s + i) = *(str + j);
        j++;
        i--;
    }
}