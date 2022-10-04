#include "main.h"
/**
 * main - Entry point
 @c: The character to print
 * Return: 0
 */
 int _putchar(char c);

void print_alphabet(void)
{
        int i = 97;
while (i <= 122)
{
        _putchar(i);
        i++;
}
        _putchar('\n');
return (0);
}
