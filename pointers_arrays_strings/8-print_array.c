#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int i = 0;
    while(*(a + i))
    {
        _putchar('*(a+i)');
        _putchar(',');
        _putchar(10);
    }
    
}