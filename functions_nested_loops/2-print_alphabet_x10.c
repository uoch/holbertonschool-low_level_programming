#include "main.h"
/**
 * main - Entry point
 @ alpha : game
 * Return: 0
 */
void print_alphabet_x10 (void)
{
    int j =0;
    int i = 97;

    for (j=0; i<=9; j++)
        {
            for (i; i<=122; i++)
                {
                    _putchar(i);
                    i++;
                }
        }
    _putchar(10);
}