ls#include <stdio.h>
/**
 * main - Entry point
 @c: The character to print
 * Return: 0
 */
 int _putchar(char c);

void print_alphabet_x10(void)
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
