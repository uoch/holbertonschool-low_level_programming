#include "main.h"

/**
 * set_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	a = *n & 1;
	return (1);
}
