#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len c = 0, rem = 0;

	if (*b == '\0')
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	while (b[len])
	{
		c = (b[len] - '0');
		rem = c % 10;
		num += rem * mult;
		c /= 10;
		mult *= 2;
		len++
	}

	return (num);
}
