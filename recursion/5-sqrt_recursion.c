#include "main.h"

/**
 * verif - checks for the square root of c
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int verif(int g, int c);
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (verif(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (verif(1, n));
}
